// Leetcode Problem no.
// 287. Find the Duplicate Number -> https://leetcode.com/problems/find-the-duplicate-number/description/

// Question Description

// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

// There is only one repeated number in nums, return this repeated number.

// You must solve the problem without modifying the array nums and uses only constant extra space.

// Example 1:

// Input: nums = [1,3,4,2,2]
// Output: 2
// Example 2:

// Input: nums = [3,1,3,4,2]
// Output: 3

// Constraints:

// 1 <= n <= 105
// nums.length == n + 1
// 1 <= nums[i] <= n
// All the integers in nums appear only once except for precisely one integer which appears two or more times.

// Follow up:

// How can we prove that at least one duplicate number must exist in nums?
// Can you solve the problem in linear runtime complexity?

// ******** Solution ********

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        // Naiv Approach
        // T.c -> O(nlogn)
        // S.c -> O(n)
        // sort(nums.begin(),nums.end());
        // for(int i =0; i<nums.size()-1; i++){
        //     if(nums[i] == nums[i+1]){
        //         return nums[i];
        //     }
        // }
        // return -1;

        // Negative Marking Method -> visited soln
        // T.c -> O(n)
        // S.c -> O(1)
        // int ans = -1;
        // for(int i = 0; i<nums.size();i++){
        //     int index = abs(nums[i]);

        //     // already visited ?
        //     if(nms[index]<0){
        //         ans = index;
        //         break;
        //     }

        //     // visited mark
        //     nums[index] *= -1;
        // }
        // return ans;

        // Positionig method
        // T.c -> O(n)
        // S.c -> O(1)
        while (nums[0] != nums[nums[0]])
        {
            swap(nums[0], nums[nums[0]]);
        }
        return nums[0];
    }
};