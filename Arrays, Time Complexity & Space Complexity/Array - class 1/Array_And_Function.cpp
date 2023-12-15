#include <iostream>
using namespace std;

// If we pass an array in function Then its reference(address) is pass to that function
// Which means pass by reference concept is apply 

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void inc(int arr[], int size)
{
    arr[0] = arr[0] + 10;

    printArray(arr, size);
}

int main()
{

    int arr[] = {5, 6};
    int size = 2;
    inc(arr, size);

    printArray(arr, size);

    return 0;
}