// Leetcode Problem no.
// 658. Find K Closest Elements -> https://leetcode.com/problems/find-k-closest-elements/description/

// Question Description

// Given a sorted integer array arr, two integers k and x, return the k closest integers to x in the array. The result should also be sorted in ascending order.

// An integer a is closer to x than an integer b if:

// |a - x| < |b - x|, or
// |a - x| == |b - x| and a < b

// Example 1:

// Input: arr = [1,2,3,4,5], k = 4, x = 3
// Output: [1,2,3,4]
// Example 2:

// Input: arr = [1,2,3,4,5], k = 4, x = -1
// Output: [1,2,3,4]

// Constraints:

// 1 <= k <= arr.length
// 1 <= arr.length <= 104
// arr is sorted in ascending order.
// -104 <= arr[i], x <= 104

// ******** Solution *******

class Solution
{
public:
    int lowerBound(vector<int> &arr, int x)
    {
        int start = 0;
        int end = arr.size() - 1;
        int ans = end;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (arr[mid] >= x)
            {
                ans = mid;
                end = mid - 1;
            }
            else if (x > arr[mid])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        return ans;
    }

    // Bottom to top approach
    vector<int> bs_method(vector<int> &arr, int k, int x)
    {
        // lower bound
        int h = lowerBound(arr, x);
        int l = h - 1;
        while (k--)
        {
            if (l < 0)
            {
                h++;
            }
            else if (h >= arr.size())
            {
                l--;
            }
            else if (x - arr[l] > arr[h] - x)
            {
                h++;
            }
            else
            {
                l--;
            }
        }
        return vector<int>(arr.begin() + l + 1, arr.begin() + h);
    }

    // T.c -> O(n-k)
    // S.c -> O(k)
    // Top to bottom approach
    vector<int> twoPtrMethod(vector<int> &arr, int k, int x)
    {
        int l = 0;
        int h = arr.size() - 1;
        while (h - l >= k)
        {
            if (x - arr[l] > arr[h] - x)
            {
                l++;
            }
            else
            {
                h--;
            }
        }
        // vector<int>ans;
        // for(int i = l ;i<=h; i++){
        //     ans.push_back(arr[i]);
        // }
        // return ans;

        return vector<int>(arr.begin() + l, arr.begin() + h + 1);
    }

    vector<int> findClosestElements(vector<int> &arr, int k, int x)
    {
        // return twoPtrMethod(arr,k,x);
        return bs_method(arr, k, x);
    }
};