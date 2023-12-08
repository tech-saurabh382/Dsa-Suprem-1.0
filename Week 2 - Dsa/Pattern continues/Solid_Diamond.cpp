#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // Full Pyramid
    for (int row = 0; row < n; row = row + 1)
    {
        // Space
        for (int col = 0; col < n - row - 1; col = col + 1)
        {
            cout << " ";
        }
        // star print
        for (int col = 0; col < row + 1; col = col + 1)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // Inverted Full Pyramid
    for (int row = 0; row < n; row = row + 1)
    {
        // Space
        for (int col = 0; col < row; col = col + 1)
        {
            cout << " ";
        }
        // star print
        for (int col = 0; col < n - row; col = col + 1)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

/*


    *
   * *
  * * *
 * * * *
* * * * *
* * * * *
 * * * *
  * * *
   * *
    *

*/