#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int c = 1; // -> use for counting purpose
    
    // Growing phase

    // Outer loop -> Row count
    for (int i = 0; i < n; i++)
    {
        // Inner loop -> Colum Count
        for (int j = 0; j <= i; j++)
        {
            cout << c;
            c++;
            if (j < i)  // -> last position se phelay star(*) print karna hai
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    // cout << "C: " << c << endl;

    // shrinking phase

    int start = c - n; // Shrinking k start k liye use kiya hai
    // Outer loop -> Row count
    for (int i = 0; i < n; i++)
    {
        int k = start;
        // Inner loop -> Colum Count
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << k;
            k++;
            if (j < n - i - 1)  // -> last position se phelay star(*) print karna hai
            {
                cout << "*";
            }
        }
        start = start - (n - i - 1); // next line k liye start update karna
        cout << endl;
    }

    return 0;
}

/*

1
2*3
4*5*6
7*8*9*10
7*8*9*10
4*5*6
2*3
1


*/