// Leetcode Problem no.
// 205. Isomorphic Strings -> https://leetcode.com/problems/isomorphic-strings/

// Question Description

// Given two strings s and t, determine if they are isomorphic.

// Two strings s and t are isomorphic if the characters in s can be replaced to get t.

// All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

// Example 1:

// Input: s = "egg", t = "add"
// Output: true
// Example 2:

// Input: s = "foo", t = "bar"
// Output: false
// Example 3:

// Input: s = "paper", t = "title"
// Output: true

// Constraints:

// 1 <= s.length <= 5 * 104
// t.length == s.length
// s and t consist of any valid ascii character.

// ******** Solution ********

class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        int hash[256] = {0};           // mapping of each char of language 's' to language 't'
        bool istCharMapped[256] = {0}; // stores if t[i] char already mapped with s[i]

        for (int i = 0; i < s.size(); i++)
        {
            if (hash[s[i]] == 0 && istCharMapped[t[i]] == 0)
            {
                hash[s[i]] = t[i];
                istCharMapped[t[i]] = true;
            }
        }

        for (int i = 0; i < s.size(); i++)
        {
            if (char(hash[s[i]]) != t[i])
            {
                return false;
            }
        }
        return true;
    }
};