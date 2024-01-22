#include <iostream>
#include <limits.h>
using namespace std;

void findMax(int arr[], int n, int i, int &maxi)
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
    if (arr[i] > maxi)
    {
        maxi = arr[i];
    }

    // baki recursion sambhal lega
    findMax(arr, n, i + 1, maxi);
}

int main()
{

    int arr[] = {10, 30, 21, 44, 32, 17, 19, 66};
    int n = 8;

    int maxi = INT_MIN;

    int i = 0;
    findMax(arr, n, i, maxi);

    cout << "maximum number is: " << maxi << endl;

    return 0;
}