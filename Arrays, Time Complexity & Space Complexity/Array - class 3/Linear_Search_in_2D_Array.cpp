#include <iostream>
using namespace std;

bool findKey(int arr[][3], int rows, int cols, int key)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] == key)
            {
                return true;
            }
        }
    }
    // value not present
    return false;
}

int main()
{
    int arr[3][3];

    // row wise input
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "printing row wise" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int key = 3;

    if (findKey(arr, 3, 3, key))
    {
        cout << "True " << endl;
    }
    else
    {
        cout << "False " << endl;
    }

    return 0;
}