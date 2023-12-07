#include <iostream>
using namespace std;

int main()
{

    // 1.Printing Solid Rectangle
    // outer loop = row observe
    // for (int row = 0; row < 3; row = row + 1)
    // {
    //     //inner loop = col observe
    //     for (int col = 0; col < 5; col = col + 1)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // 2.Printing Square Pattern
    // outer loop - row observe
    // for (int row = 0; row < 4; row = row + 1)
    // {
    //     // inner loop - col observe
    //     for (int col = 0; col < 4; col = col + 1)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // 3.Printing Square Pattern taking user input
    // int n;
    // cin >> n;
    // outer loop - row observe
    // for (int row = 0; row < n; row = row + 1)
    // {
    //     // inner loop - col observe
    //     for (int col = 0; col < n; col = col + 1)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // // 4. Holllow Rectangle
    // int rowCount, colCount;
    // cin >> rowCount;
    // cin >> colCount;

    // for (int row = 0; row < rowCount; row += 1)
    // {
    //     // first row or last row -> 5 *
    //     if (row == 0 || row == rowCount - 1)
    //     {
    //         for (int col = 0; col < colCount; col++)
    //         {
    //             cout << "* ";
    //         }
    //     }
    //     else
    //     {
    //         // remaining middle rows
    //         // first star
    //         cout << "* ";
    //         for (int i = 0; i < colCount - 2; i++)
    //         {
    //             cout << "  ";
    //         }
    //         // last star
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // 5. Half Pyramid
    // number of rows
    // int n;
    // cin >> n;

    // for (int row = 0; row < n; row = row + 1)
    // {
    //     for (int col = 0; col < row + 1; col = col + 1)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // 6. Inverted Half Pyramid
    // int n;
    // cin >> n;

    // for (int row = 0; row < n; row = row + 1)
    // {
    //     for (int col = 0; col < n - row; col = col + 1)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // 7. Numeric Half Pyramid
    // int n;
    // cin >> n;

    // for (int row = 0; row < n; row = row + 1)
    // {
    //     for (int col = 0; col < row + 1; col = col + 1)
    //     {
    //         cout << col + 1;
    //         cout << " ";
    //     }
    //     cout << endl;
    // }

    // 8. Inverted Numeric Half Pyramid
    int n;
    cin >> n;

    for (int row = 0; row < n; row = row + 1)
    {
        for (int col = 0; col < n - row; col = col + 1)
        {
            cout << col + 1;
            cout << " ";
        }
        cout << endl;
    }
}