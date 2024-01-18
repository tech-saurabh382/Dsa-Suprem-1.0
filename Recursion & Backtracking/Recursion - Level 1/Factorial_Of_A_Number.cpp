#include <iostream>
using namespace std;

int factorial(int n)
{
    cout << "Function is called for n: " << n << endl;
    // Base case
    if (n == 1 || n == 0)
        return 1;

    int chotiProblemAns = factorial(n - 1);
    int badiProblemAns = n * chotiProblemAns;

    return badiProblemAns;

    // int ans = n * factorial(n - 1);
    // return ans;
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