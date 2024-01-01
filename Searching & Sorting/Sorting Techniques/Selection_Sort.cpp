#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // T.c -> O(n^2)

    // Selection Sort is generally use in case of if the array size is small

    vector<int> arr{5, 4, 3, 2, 1};

    int n = arr.size();

    // selection sort
    // outter loop -> (n-1) round
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        // Inner loop -> index of minimum element in range i to n
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                // new minimum, then store
                minIndex = j;
            }
        }
        // swap
        swap(arr[i], arr[minIndex]);
    }

    // printing
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}