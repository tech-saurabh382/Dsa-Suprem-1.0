// Leetcode Problem no.
// 33. Search in Rotated Sorted Array -> https://leetcode.com/problems/search-in-rotated-sorted-array/description/

// Question Description

// There is an integer array nums sorted in ascending order (with distinct values).

// Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].

// Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

// You must write an algorithm with O(log n) runtime complexity.

// Example 1:

// Input: nums = [4,5,6,7,0,1,2], target = 0
// Output: 4
// Example 2:

// Input: nums = [4,5,6,7,0,1,2], target = 3
// Output: -1
// Example 3:

// Input: nums = [1], target = 0
// Output: -1

// Constraints:

// 1 <= nums.length <= 5000
// -104 <= nums[i] <= 104
// All values of nums are unique.
// nums is an ascending array that is possibly rotated.
// -104 <= target <= 104

// ******** Solution ********

class Solution
{
public:
    int binarySearch(vector<int> arr, int target, int start, int end)
    {
        int mid = start + (end - start) / 2;

        while (start <= end)
        {
            int element = arr[mid];

            if (element == target) // -> element found then return index
            {
                return mid;
            }
            else if (target < element)
            {
                // search in left
                end = mid - 1;
            }
            else
            {
                // search in right
                start = mid + 1;
            }

            mid = start + (end - start) / 2;
        }

        // element not found
        return -1;
    }

    int findPivot(vector<int> arr)
    {
        int s = 0;
        int e = arr.size() - 1;
        int mid = s + (e - s) / 2;

        while (s < e)
        {
            if (mid + 1 < arr.size() && arr[mid] > arr[mid + 1])
            {
                return mid;
            }
            if (mid - 1 >= 0 && arr[mid - 1] > arr[mid])
            {
                return mid - 1;
            }

            if (arr[s] >= arr[mid])
            {
                e = mid - 1;
            }
            else
            {
                s = mid;
            }
            mid = s + (e - s) / 2;
        }
        return s;
    }

    int search(vector<int> &nums, int target)
    {
        int pivotIndex = findPivot(nums);

        if (target >= nums[0] && target <= nums[pivotIndex])
        {
            // search in array A
            int ans = binarySearch(nums, target, 0, pivotIndex);
            return ans;
        }

        if (pivotIndex + 1 < nums.size() &&
            target >= nums[pivotIndex + 1] && target <= nums[nums.size() - 1])
        {
            // search in array B
            int ans = binarySearch(nums, target, pivotIndex + 1, nums.size() - 1);
            return ans;
        }
        return -1;
    }
};