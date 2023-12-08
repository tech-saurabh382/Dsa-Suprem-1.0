#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  // Outer loop -> Row Count
  for (int row = 0; row < n; row++)
  {
    // Inner loop -> Colum Count
    for (int col = row + 1; col <= n; col++)
    {
      // Printing Condition for Numeric value and Spaces
      if (col == row + 1 || col == n || row == 0)
        cout << col << " ";
      else
        cout << "  ";
    }
    cout << endl;
  }
  return 0;
}

// OutPut -

/*

1 2 3 4 5
2     5
3   5
4 5
5


*/