// GFG Problem no.
// Add two numbers represented by two arrays -> https://www.geeksforgeeks.org/problems/add-two-numbers-represented-by-two-arrays2408/1

// Question Description

// Given two array A[0….N-1] and B[0….M-1] of size N and M respectively, representing two numbers such that every element of arrays represent a digit. For example, A[] = { 1, 2, 3} and B[] = { 2, 1, 4 } represent 123 and 214 respectively. The task is to find the sum of both the numbers.

// Example 1:

// Input : A[] = {1, 2}, B[] = {2, 1}
// Output : 33
// Explanation:
// N=2, and A[]={1,2}
// M=2, and B[]={2,1}
// Number represented by first array is 12.
// Number represented by second array is 21
// Sum=12+21=33

// Example 2:

// Input : A[] = {9, 5, 4, 9}, B[] = {2, 1, 4}
// Output : 9763
// Your Task:
// This is a function problem. The input is already taken care of by the driver code. You only need to complete the function calc_Sum() that takes an array (a), sizeOfArray (n), an array (b), sizeOfArray (m), and return the sum . The driver code takes care of the printing.

// Expected Time Complexity: O(N + M).
// Expected Auxiliary Space: O(N + M).

// Constraints:
// 2 ≤ N ≤ 105
// 2 ≤ M ≤ 105

// ******** Solution ********

class Solution
{
public:
    string calc_Sum(int *a, int n, int *b, int m)
    {

        int carry = 0;
        string ans;
        int i = n - 1;
        int j = m - 1;

        while (i >= 0 && j >= 0)
        {
            int x = a[i] + b[j] + carry;
            int digit = x % 10;
            ans.push_back(digit + '0');
            carry = x / 10;
            i--, j--;
        }

        while (i >= 0)
        {
            int x = a[i] + 0 + carry;
            int digit = x % 10;
            ans.push_back(digit + '0');
            carry = x / 10;
            i--;
        }

        while (j >= 0)
        {
            int x = 0 + b[j] + carry;
            int digit = x % 10;
            ans.push_back(digit + '0');
            carry = x / 10;
            j--;
        }

        if (carry)
        {
            ans.push_back(carry + '0');
        }

        while (ans[ans.size() - 1] == '0')
        {
            ans.pop_back();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};