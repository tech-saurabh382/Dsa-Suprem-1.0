#include <iostream>
using namespace std;

// Best Case and Average Case T.c -> O(nlogn)
// worst T.c -> O(n^2) (in case of reverse sorted)

int partition(int arr[], int s, int e)
{
    // step 1: choose pivot element
    int pivotIndex = s;
    int pivotElement = arr[s];

    // step 2: find right position for pivot element and place it there
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivotElement)
        {
            count++;
        }
    }
    // jab mai loop se bahar hua, toh mere pass pivot ki right
    // position ka index ready h
    int rightIndex = s + count;
    swap(arr[pivotIndex], arr[rightIndex]);
    pivotIndex = rightIndex;

    // step 3: left me chote aur right me bade
    int i = s;
    int j = e;

    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivotElement)
        {
            i++;
        }
        while (arr[j] > pivotElement)
        {
            j--;
        }

        // 2 case ho skte hai ->
        // A -> you found the element to swap
        // B -> No need to swap
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i], arr[j]);
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int s, int e)
{
    // base condition
    if (s >= e)
    {
        return;
    }

    // partition logic, return pivotIndex
    int p = partition(arr, s, e);

    // recursion logic
    // pivot element -> left
    quickSort(arr, s, p - 1);

    // pivot element -> right
    quickSort(arr, p + 1, e);
}

int main()
{
    int arr[] = {8, 1, 3, 4, 20, 50, 50, 50, 50, 50, 5, 1, 1, 1, 1, 2, 2, 2, 30};
    int n = 20;

    int s = 0;
    int e = n - 1;
    quickSort(arr, s, e);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}