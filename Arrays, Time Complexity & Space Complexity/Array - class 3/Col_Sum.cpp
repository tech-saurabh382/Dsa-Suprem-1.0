#include <iostream>
using namespace std;

void printColWiseSum(int arr[][3], int rows, int cols)
{
    // col sum -> col-wise traversal
    cout << "Print col-wise sum " << endl;
    for (int i = 0; i < rows; i++)
    {
        int sum = 0;
        for (int j = 0; j < cols; j++)
        {
            sum = sum + arr[j][i];
        }
        cout << sum << endl;
    }
}

int main()
{
    int arr[3][3];
    int rows = 3;
    int cols = 3;

    // col wise input
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[j][i];
        }
    }

    cout << "printing Col wise" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    printColWiseSum(arr, rows, cols);

    return 0;
}