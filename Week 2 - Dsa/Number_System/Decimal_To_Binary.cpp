#include <iostream>
#include <cmath>
using namespace std;

int decimalToBinary1(int n)
{
    // Division maethod
    int binaryno = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = n % 2;
        binaryno = bit * pow(10, i++) + binaryno;
        n = n / 2;
    }
    return binaryno;
}

int decimalToBinary2(int n)
{
    // Bitwise maethod
    int binaryno = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = (n & 1);
        binaryno = bit * pow(10, i++) + binaryno;
        n = n >> 1;
    }
    return binaryno;
}

int main()
{
    int n;
    cin >> n;
    int binary = decimalToBinary2(n);
    cout << binary << endl;
    return 0;
}