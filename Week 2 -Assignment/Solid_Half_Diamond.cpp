#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // Outer loop -> Row Count
    for (int i = 0; i < 2 * n - 1; i++)
    {
        // int cond = 0;
        // if (i < n) // -> Growing phase of Diamond
        // {
        //     cond = i; // ->  row k no jitna col calega
        // }
        // else // -> Shrinking phase of Diamond
        // {
        //     cond = n - (i % n) - 2;
        // }

        int cond = i < n ? i : n - (i % n) - 2;

        // Inner loop -> Colum Count
        for (int j = 0; j <= cond; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

/*

*
**
***
****
*****
****
***
**
*


*/