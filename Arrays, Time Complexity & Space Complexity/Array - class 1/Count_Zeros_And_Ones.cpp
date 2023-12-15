#include <iostream>
using namespace std;

int main()
{
    int arr[] = {0, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 2, 4, 5, 9};

    int size = 19;

    int numZero = 0;
    int numOne = 0;

    for (int i = 0; i < size; i++)
    {
        // if zero found, increment numZero
        if (arr[i] == 0)
        {
            numZero++;
        }
        // if one found, increment numOne
        if (arr[i] == 1)
        {
            numOne++;
        }
    }

    cout << "numbers of zeros: " << numZero << endl;
    cout << "numbers of one: " << numOne << endl;

    return 0;
}