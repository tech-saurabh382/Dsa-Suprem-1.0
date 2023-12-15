#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int arr[] = {2, 4, 6, 1, 3, 7, 9, 12, 56, 42, 21};
    int size = 11;
    // initaize the mini variable with the maximum possible integer value
    int mini = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < mini)
        {
            // found a number greater than mini, update mini
            mini = arr[i];
        }
    }

    cout << "minimum number is " << mini << endl;

    return 0;
}