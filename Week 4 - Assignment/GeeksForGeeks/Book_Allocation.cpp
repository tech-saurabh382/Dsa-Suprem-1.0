// GFG Problem
// Allocate minimum number of pages -> https://www.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/1

// Question Description

// You have N books, each with A[i] number of pages. M students need to be allocated contiguous books, with each student getting at least one book.
// Out of all the permutations, the goal is to find the permutation where the maximum number of pages allotted to a student should be minimum, out of all possible permutations.

// Note: Return -1 if a valid assignment is not possible, and allotment should be in contiguous order (see the explanation for better understanding).

// Example 1:

// Input:
// N = 4
// A[] = {12,34,67,90}
// M = 2
// Output:113
// Explanation:Allocation can be done in
// following ways:
// {12} and {34, 67, 90} Maximum Pages = 191
// {12, 34} and {67, 90} Maximum Pages = 157
// {12, 34, 67} and {90} Maximum Pages =113.
// Therefore, the minimum of these cases is 113,
// which is selected as the output.

// Example 2:

// Input:
// N = 3
// A[] = {15,17,20}
// M = 2
// Output:32
// Explanation: Allocation is done as
// {15,17} and {20}
// Your Task:
// You don't need to read input or print anything. Your task is to complete the function findPages() which takes 2 Integers N, and m and an array A[] of length N as input and returns the expected answer.

// Expected Time Complexity: O(NlogN)
// Expected Auxilliary Space: O(1)

// ******** Solution *******

class Solution
{
public:
    bool isPossibleSolution(int A[], int N, int M, int sol)
    {
        int pageSum = 0;
        int c = 1;
        for (int i = 0; i < N; i++)
        {
            if (A[i] > sol)
            {
                return false;
            }
            if (pageSum + A[i] > sol)
            {
                c++;
                pageSum = A[i];
                if (c > M)
                {
                    return false;
                }
            }
            else
            {
                pageSum += A[i];
            }
        }
        return true;
    }

    // Function to find minimum number of pages.
    int findPages(int A[], int N, int M)
    {
        // code here
        if (M > N)
        {
            return -1;
        }
        int start = 0;
        int end = accumulate(A, A + N, 0);
        int ans = -1;

        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (isPossibleSolution(A, N, M, mid))
            {
                ans = mid;
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        return ans;
    }
};