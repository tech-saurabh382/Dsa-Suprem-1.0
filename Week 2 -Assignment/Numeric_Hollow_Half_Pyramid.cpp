#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // Outer loop -> Row count  
    for (int row = 0; row < n; row++)
    { 
        // Inner loop -> Colum Count
        for (int col = 0; col <= row; col++)
        { 
            // For Printing Number Count And Spaces
            if (col == 0 || col == row || row == n-1)
                cout << col + 1 << " ";
            else{
                cout<<"  ";
            }    
        }
        cout << endl;
    }
}

/*

1 
1 2 
1   3 
1     4 
1 2 3 4 5 

*/