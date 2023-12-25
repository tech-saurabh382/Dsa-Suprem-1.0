#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // T.c -> O(n^2)
    // S.c -> O(1)

    vector<int> arr{10, 1, 7, 6, 14, 9};

    int n = arr.size();

    // Bubble Sort
    for (int round = 1; round < n; round++)
    {
        // bool swapped = false;
        int swapCount = 0;
        for (int j = 0; j < n - round; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // swapped = true;
                swap(arr[j], arr[j + 1]);
                swapCount++;
            }
        }

        if (swapCount == 0)
        {
            // sort ho chuka hai, no need to check in further round
            break;
        }

        // if (swapped == false)
        // {
        //     // sort ho chuka hai, no need to check in further round
        //     break;
        // }
    }

    // printing
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}