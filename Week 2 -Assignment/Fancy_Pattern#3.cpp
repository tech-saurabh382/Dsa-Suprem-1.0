#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    // Growing phase

    // Outer loop -> Row count
    for (int i = 0; i < n; i++)
    {
        int cond = i <= n / 2 ? 2 * i : 2 * (n - i - 1);
        // Inner loop -> Colum Count
        for (int j = 0; j <= cond; j++)
        {
            if (j == 0 || j == cond)
            {
                cout << "*";
            }
            if (j <= cond / 2)
            {
                cout << j + 1;
            }
            else
            {
                cout << cond - j + 1;
            }
        }
        cout << endl;
    }

    return 0;
}