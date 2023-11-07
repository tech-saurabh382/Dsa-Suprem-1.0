#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int row = 0; row < n; row += 1)
    {
        // spaces
        for (int col = 0; col < n - row - 1; col += 1)
        {
            cout << "  ";
        }
        // numbers
        for (int col = 0; col < row + 1; col += 1)
        {
            cout << row + col + 1<<" ";
        }
        //reverse counting
        int start = 2*row;
        for(int col =0; col<row; col +=1){
            cout<<start<<" ";
            start = start - 1;
        }

        cout<<endl;
    }

    /*
    
        1
      2 3 2
    3 4 5 4 3 
  4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5

    
    */

    // for (int row = 0; row < n; row = row + 1)
    // {
    //     // row+1 element print karnay wale hai
    //     int start = row + 1;
    //     for (int col = 0; col < row + 1; col = col + 1)
    //     {
    //         // cout<< row + col + 1<<" ";
    //         cout << start << " ";
    //         start = start + 1;
    //     }

    //     cout << endl;
    // }

    /*
    1
    2 3
    3 4 5
    4 5 6 7
    5 6 7 8 9
    */
}