#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  // Outer loop -> Row Count
  for (int i = 0; i < n; i++)
  {
    // Inner loop -> Colum Count
    for (int j = i + 1; j <= n; j++)
    {
      // Printing Condition for Numeric value and Spaces
      if (j == i + 1 || j == n || i == 0)
        cout << j << " ";
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