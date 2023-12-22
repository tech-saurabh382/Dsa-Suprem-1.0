#include <iostream>
using namespace std;

int findFirstOccurence(int arr[], int n, int target)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2; // Hey wala integer over flow kara skta hai

    // Best Practice (Important)
    // int mid = start + (end - start) / 2;

    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == target)
        {
            // ans store
            ans = mid;
            // left mai jao
            end = mid - 1;
        }
        else if (target > arr[mid])
        {
            // right nai jao
            start = mid + 1;
        }
        else if (target < arr[mid])
        {
            // left mai jao
            end = mid - 1;
        }
        // galti yaha karte hai hamesha
        mid = (start + end) / 2;
    }
    return ans;
}

int findLastOccurence(int arr[], int n, int target)
{
    int s = 0;
    int e = n - 1;
    int mid = (s + e) / 2;
    int ans = -1;

    // Best practice
    //  int mid = s + (e-s)/2;

    while (s <= e)
    {
        if (arr[mid] == target)
        {
            // ans store
            ans = mid;
            // right mai jao
            s = mid + 1;
        }
        else if (target > arr[mid])
        {
            // right mai jao
            s = mid + 1;
        }
        else if (target < arr[mid])
        {
            // left mai jao
            e = mid - 1;
        }
        // galti yaha hoti hai hamesha
        mid = (s + e) / 2;
    }
    return ans;
}

int findTotalOccurene(int arr[], int n, int target)
{
    int firstOcc = findFirstOccurence(arr, n, target);
    int lastOcc = findLastOccurence(arr, n, target);
    int totalOcc = lastOcc - firstOcc + 1;

    return totalOcc;
}

int main()
{

    int arr[] = {30, 30, 30, 30, 30, 30, 70, 80, 90};
    int target = 30;
    int n = 9;

    int ans = findTotalOccurene(arr, n, target);
    cout << "Total Number of Occerence is " << ans << endl;

    return 0;
}