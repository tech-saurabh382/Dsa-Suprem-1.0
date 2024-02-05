#include <iostream>
#include <vector>
// Leetcode Problem no.
// 75. Sort Colors->  https://leetcode.com/problems/sort-colors/

// Question Description

// Given an array nums with n objects colored red, white, or blue, sort them *in-place* so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

// We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

// You must solve this problem without using the library's sort function.

// Example 1:

// Input: nums = [2,0,2,1,1,0]
// Output: [0,0,1,1,2,2]
// Example 2:

// Input: nums = [2,0,1]
// Output: [0,1,2]

// Constraints:

// n == nums.length
// 1 <= n <= 300
// nums[i] is either 0, 1, or 2.

// Follow up: Could you come up with a one-pass algorithm using only constant extra space?

// ******** Solution ********

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        // stl: sort() -> mix of Quick sort,heap sort,insertion sort
        // Time Complexity -> O(nlogn)
        // Space Complexity -> O(n)
        // sort(nums.begin(),nums.end()); -> not to be used (sort function use nahi karna hai)
        // count method -> not to be used (kyu ki hey in place sort nahi kar raha)

        // Time Complexity -> O(n)
        // Space Complexity -> O(1)

        //    int zeros,ones,twos;
        //    zeros=ones=twos=0;

        //    for(int i = 0; i<nums.size(); i++){
        //        if(nums[i] == 0){
        //            zeros++;
        //        }
        //        else if(nums[i] == 1){
        //            ones++;
        //        }
        //        else{
        //            twos++;
        //        }
        //     }

        //     // spread
        //     int i = 0;
        //     while(zeros--){
        //         nums[i] = 0;
        //         i++;
        //     }
        //     while(ones--){
        //         nums[i] = 1;
        //         i++;
        //     }
        //     while(twos--){
        //         nums[i] = 2;
        //         i++;
        //     }

        // 3 pointer approach

        int l = 0, m = 0, h = nums.size() - 1;
        while (m <= h)
        {
            if (nums[m] == 0)
            {
                swap(nums[l], nums[m]);
                l++;
                m++;
            }
            else if (nums[m] == 1)
            {
                m++;
            }
            else
            {
                swap(nums[m], nums[h]);
                h--;
            }
        }
    }
};