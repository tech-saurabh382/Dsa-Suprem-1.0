#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // vector<vector<int>> arr;

    // vector<int> a{1, 2, 3};
    // vector<int> b{4, 5, 6, 5, 8};
    // vector<int> c{7, 8};

    // arr.push_back(a);
    // arr.push_back(b);
    // arr.push_back(c);

    // for (int i = 0; i < arr.size(); i++) // arr.size() -> no. of rows
    // {
    //     for (int j = 0; j < arr[i].size(); j++) // -> arr[i].size() -> i th row mai kitnay columnn hai
    //     {                                       // -> arr[0].size() -> only run if no. of cols are same
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // int row = 3;
    // int col = 5;

    // vector<vector<int>> arr(row, vector<int>(col, 101)); // row initialize size of outer vector
    //                                                      // col initialize size of inner vector
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     for (int j = 0; j < arr[i].size(); j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    //                      no. of row     no. of col
    //                      ^               ^
    //                      |               |
    vector<vector<int>> brr(5, vector<int>(5, -8));

    for (int i = 0; i < brr.size(); i++)
    {
        for (int j = 0; j < brr[i].size(); j++)
        {
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}