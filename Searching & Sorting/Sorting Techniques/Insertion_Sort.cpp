#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // In Normal Case Time complexity are -
    // T.c -> O(n^2)
    // S.c -> O(1)

    // In Best Case - (If Array is Already Sorted)
    // T.c -> O(n)
    // S.c -> O(1)

    // In worst case - (If Array is Reverse Sorted)
    // T.c -> O(n^2)
    // S.c -> O(1)

    // Insertion Sort

    vector<int> arr{10, 1, 7, 6, 14, 9};
    int n = arr.size();

    for (int round = 1; round < n; round++)
    {
        // Step A - fetch
        int val = arr[round];
        // Step B -Compare
        int j = round - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > val)
            {
                // shift
                arr[j + 1] = arr[j];
            }
            else
            {
                // rukna hai
                break;
            }
        }

        // Step D - Copy
        arr[j + 1] = val;
    }

    // Printing
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}