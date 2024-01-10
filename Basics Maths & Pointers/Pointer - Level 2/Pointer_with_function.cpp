#include <iostream>
using namespace std;

void solve(int arr[])
{
    cout << "Size inside solve function: " << sizeof(arr) << endl;

    cout << "arr: " << arr << endl;
    cout << "&arr: " << &arr << endl;

    arr[0] = 50;
}

int main()
{
    int arr[10] = {1, 2, 3, 4};
    int size = 4;
    cout << "Size inside the main function: " << sizeof(arr) << endl;

    cout << arr << endl;
    cout << &arr << endl;

    // printing array inside main
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << endl
         << endl
         << "Now calling solve function " << endl;

    solve(arr);

    cout << "wapas main function me aaagaye hai" << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}