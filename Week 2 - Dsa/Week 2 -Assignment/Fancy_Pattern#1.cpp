#include <iostream>
#include "assert.h"
using namespace std;

// *********** Important To Note Solving **************
// In these Ques we can only enter value of upto 9 has their is only 17 col available

int main()
{

    int n;
    cin >> n;
    assert(n <= 9); // -> This is use in indusrty 
    // if (n > 9)
    // {
    //     cout << "Please put value <=9.\n";
    //     return 0;
    // }

    // Outer loop -> Row Count
    for (int i = 0; i < n; i++)
    {
        int start_num_index = 8 - i; // num printing start
        int num = i + 1;             // Konsa no print karna hai
        int count_num = num;         // num kitnay bar print karna hai
        // Inner loop -> Colum Count
        for (int j = 0; j < 17; j++)
        {
            if (j == start_num_index && count_num > 0)
            {
                cout << num;
                start_num_index += 2; // next number print hota hai +2 index pe
                count_num--;
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}

/*

// For n = 9

********1********
*******2*2*******
******3*3*3******
*****4*4*4*4*****
****5*5*5*5*5****
***6*6*6*6*6*6***
**7*7*7*7*7*7*7**
*8*8*8*8*8*8*8*8*
9*9*9*9*9*9*9*9*9


*/