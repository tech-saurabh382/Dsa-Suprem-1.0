// Leetcode Problem no.
// 242. Valid Anagram -> https://leetcode.com/problems/valid-anagram/description/

// Question Description

// Given two strings s and t, return true if t is an anagram of s, and false otherwise.

// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

// Example 1:

// Input: s = "anagram", t = "nagaram"
// Output: true
// Example 2:

// Input: s = "rat", t = "car"
// Output: false

// Constraints:

// 1 <= s.length, t.length <= 5 * 104
// s and t consist of lowercase English letters.

// Follow up: What if the inputs contain Unicode characters? How would you adapt your solution to such a case?

// ******** Solution ********

class Solution
{
public:
    bool isAnagram(string s, string t)
    {

        // Using Frequency Count Method
        // T.c -> O(n+m)

        int freqTable[256] = {0};

        for (int i = 0; i < s.size(); i++)
        {
            freqTable[s[i]]++;
        } // O(n)

        for (int i = 0; i < t.size(); i++)
        {
            freqTable[t[i]]--;
        } // O(m)

        for (int i = 0; i < 256; i++)
        {
            if (freqTable[i] != 0)
            {
                return false;
            }
        } // O(256)

        return true;

        //   Using Sort Method
        //   T.c -> O(nlogn)
        //   sort(s.begin(),s.end());
        //   sort(t.begin(),t.end());

        //   return (s == t) ? true : false;
    }
};