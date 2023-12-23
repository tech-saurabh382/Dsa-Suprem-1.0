#include <iostream>
using namespace std;

int findSqrt(int n)
{
    int target = n;
    int s = 0;
    int e = n;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (mid * mid == target)
        {
            return mid;
        }
        if (mid * mid > target)
        {
            // left search
            e = mid - 1;
        }
        else
        {
            // ans store
            ans = mid;
            // right search
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the number " << endl;
    cin >> n;

    int ans = findSqrt(n);
    cout << "Ans is " << ans << endl;

    int precision;
    cout << "Enter the number of the floating digits in precision " << endl;
    cin >> precision;

    double step = 0.1;
    double finalAns = ans;
    for (int i = 0; i < precision; i++)
    {
        for (double j = finalAns; j * j <= n; j = j + step)
        {
            finalAns = j;
        }
        step = step / 10;
    }
    cout << "Final ans is " << finalAns << endl;
    return 0;
}

// Leetcode Problem no.
// 69. Sqrt(x) -> https://leetcode.com/problems/sqrtx/description/

// Question Description

// Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.

// You must not use any built-in exponent function or operator.

// For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.

// Example 1:

// Input: x = 4
// Output: 2
// Explanation: The square root of 4 is 2, so we return 2.
// Example 2:

// Input: x = 8
// Output: 2
// Explanation: The square root of 8 is 2.82842..., and since we round it down to the nearest integer, 2 is returned.

// Constraints:

// 0 <= x <= 231 - 1

// ******** Solution ********

// class Solution
// {
// public:
//     int mySqrt(int x)
//     {
//         int s = 0;
//         int e = x;
//         int target = x;
//         int ans = -1;
//         long long mid = s + (e - s) / 2;

//         while (s <= e)
//         {
//             if (mid * mid == target)
//             {
//                 return mid;
//             }
//             if (mid * mid < target)
//             {
//                 // ans store kardo
//                 ans = mid;
//                 s = mid + 1;
//             }
//             else
//             {
//                 e = mid - 1;
//             }
//             mid = s + (e - s) / 2;
//         }
//         return ans;
//     }
// };