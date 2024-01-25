#include <iostream>
#include <vector>
using namespace std;

bool checkSorted(vector<int> &arr, int n, int i)
{
    // base case
    if (i == n - 1)
    {
        return true;
    }

    //  1 case solve karna hai
    if (arr[i + 1] < arr[i])
    {
        return false;
    }

    // baaki recursion sambhal lega
    return checkSorted(arr, n, i + 1);
}

int main()
{
    vector<int> v{10, 20, 30, 40, 50, 60};
    int n = v.size();

    int i = 0;

    bool isSorted = checkSorted(v, n, i);

    if (isSorted)
    {
        cout << "Array is Sorted" << endl;
    }
    else
    {
        cout << "Array is not Sorted" << endl;
    }

    return 0;
}