#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 1 || n == 0)
        return 1;
    int ans = n * factorial(n - 1);
    return ans;
}

int main()
{
    int n;
    cout << "Enter the value of n " << endl;
    cin >> n;

    int ans = factorial(n);

    cout << "Answer is : " << ans;

    return 0;
}