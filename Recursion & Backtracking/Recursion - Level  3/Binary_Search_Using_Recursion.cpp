#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &arr, int s, int e, int key)
{
    // base case for
    // case-1 -> Key Not found
    // s > e -> invalid array
    if (s > e)
    {
        return -1;
    }

    int mid = s + (e - s) / 2;

    // case-2 -> Key Found
    if (arr[mid] == key)
    {
        return mid;
    }

    // // arr[mid] < key -> right me search
    // if (arr[mid] < key)
    // {
    //     return binarySearch(arr, mid + 1, e, key);
    // }
    // // arr[mid] > key -> left me search
    // else
    // {
    //     return binarySearch(arr, s, mid - 1, key);
    // }

    return (arr[mid] < key) ? binarySearch(arr, mid + 1, e, key) : binarySearch(arr, s, mid - 1, key);
}

int main()
{
    vector<int> v{10, 20, 40, 60, 70, 90, 99};
    int n = v.size();
    int target = 99;

    int s = 0;
    int e = n - 1;
    int ans = binarySearch(v, s, e, target);

    cout << "Answer is: " << ans << endl;

    return 0;
}