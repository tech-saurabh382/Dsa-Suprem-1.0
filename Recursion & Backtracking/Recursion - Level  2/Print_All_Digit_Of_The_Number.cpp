#include <iostream>
using namespace std;

void printDigits(int n)
{
    // Base case
    if (n == 0)
    {
        return;
    }

    int newValueOfN = n / 10;

    // baaki recursion sambhal lega
    printDigits(newValueOfN);

    // 1 case main solve karuga
    int digit = n % 10;
    cout << digit << " ";
}

int main()
{

    int n = 647;

    if (n == 0)
    {
        cout << 0 << endl;
    }

    printDigits(n);

    return 0;
}