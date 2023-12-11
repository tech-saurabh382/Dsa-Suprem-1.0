#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int k = n; // K is use for deciding the no col according to number of row
    
    // Outer loop -> Row Count
    for (int i = 0; i < n; i++)
    {
        int c = 1; // use for pinting numeric in palindrom
        // Inner loop -> Colum Count
        for (int j = 0; j < k; j++)
        {
            // Spaces
            if (j < n - i - 1)
            {
                cout << "  ";
            }
            // Printing increasing numeric
            else if (j <= n - 1)
            {
                cout << c << " ";
                c++;
            }
            // Counting Reverse
            else if (j == n)
            {
                c = c - 2;
                cout << c << " ";
                c--;
            }
            // Printing increasing numeric
            else
            {
                cout << c << " ";
                c--;
            }
        }
        k++; // -> Row wise column incresae
        cout << endl;
    }
    return 0;
}

/*

        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1


*/