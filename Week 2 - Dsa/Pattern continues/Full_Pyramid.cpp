#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int row = 0; row < n; row = row + 1)
    {
        // spaces print
        for (int col = 0; col < n - row - 1; col = col + 1)
        {
            cout << " ";
        }

        // star print
        for (int col = 0; col < row + 1; col = col + 1)
        {
            cout << "* "; // -> har star ke baad space hai 
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
* * * * * *


*/