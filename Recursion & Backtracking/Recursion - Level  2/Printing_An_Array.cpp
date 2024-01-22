#include <iostream>
using namespace std;

// void print(int arr[], int n, int i)
// {
//     // Base Case
//     if (i >= n)
//     {
//         return;
//     }

//     // 1 case solve kardi
//     cout << arr[i] << " ";
//     // baaki recursion sambhal lega
//     print(arr, n, i + 1);
// }

void print(int arr[], int n)
{
    // Base Case
    if (n == 0)
    {
        return;
    }

    // 1 case solve kardi
    cout << arr[0] << " ";
    // baaki recursion sambhal lega
    print(arr + 1, n - 1);
}

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int n = 5;
    int i = 0;

    // print(arr, n, i);
    print(arr, n);

    return 0;
}