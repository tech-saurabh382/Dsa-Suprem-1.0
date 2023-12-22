#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int binarySearch(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;

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

int main()
{
    // int arr[] = {2, 4, 6, 8, 10, 12, 16};
    // int target = 12;
    // int size = 7;

    // int indexOfTarget = binarySearch(arr, size, target);

    // if (indexOfTarget == -1)
    // {
    //     cout << "Target not found" << endl;
    // }
    // else
    // {
    //     cout << "Target found at: " << indexOfTarget << endl;
    // }

    vector<int> v{1, 2, 3, 4, 5, 6};
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = 7;

    if (binary_search(arr, arr + size, 7))
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    // if (binary_search(v.begin(), v.end(), 30))
    // {
    //     cout << "Found" << endl;
    // }
    // else
    // {
    //     cout << "Not Found" << endl;
    // }

    return 0;
}