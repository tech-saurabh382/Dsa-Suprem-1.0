#include <iostream>
#include <limits.h>
using namespace std;

void findMin(int arr[], int n, int i, int &mini)
{
    // base case
    if (i >= n)
    {
        // array khatam hogaya, poora traverse hogya
        // toh wapas aajao
        return;
    }

    // 1 case solve karna h
    // current element ko check karo for max
    mini = min(mini, arr[i]);

    // baki recursion sambhal lega
    findMin(arr, n, i + 1, mini);
}

int main()
{

    int arr[] = {10, 30, 21, 44, 32, 17, 19, 66};
    int n = 8;

    int mini = INT_MAX;

    int i = 0;
    findMin(arr, n, i, mini);

    cout << "minimum number is: " << mini << endl;

    return 0;
}