#include <iostream>
using namespace std;

int raja = 420;

int main()
{
    // variable scooping

    // decelaration
    int a;
    // initialization
    int b = 5;
    // updation
    b = 10;
    cout << raja << endl;

    if (true)
    {
        // int b = 15;
        int raja = 421;
        cout << b << endl;
        cout << raja << endl;
    }

    cout << b << endl;
}