// Leetcode Problem no.
// 5. Longest Palindromic Substring -> https://leetcode.com/problems/longest-palindromic-substring/description/

// Question Description

// Given a string s, return the longest
// palindromic

// substring
//  in s.

// Example 1:

// Input: s = "babad"
// Output: "bab"
// Explanation: "aba" is also a valid answer.
// Example 2:

// Input: s = "cbbd"
// Output: "bb"

// Constraints:

// 1 <= s.length <= 1000
// s consist of only digits and English letters.

// ******** Solution ********

// T.C -> O(n^3)
// S.C -> (1)

// These is a naive approach

// We optimize these ans with the help of Dynammic Programming
// we learn it in the future for of now leetcode accept the ans

class Solution
{
public:
    bool isPalindrome(string &s, int start, int end)
    {
        while (start < end)
        {
            if (s[start] != s[end])
            {
                return false;
            }
            start++, end--;
        }
        return true;
    }

    string longestPalindrome(string s)
    {
        string ans = "";
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = i; j < s.size(); j++)
            {
                if (isPalindrome(s, i, j))
                {
                    string t = s.substr(i, j - i + 1);
                    ans = t.size() > ans.size() ? t : ans;
                }
            }
        }
        return ans;
    }
};