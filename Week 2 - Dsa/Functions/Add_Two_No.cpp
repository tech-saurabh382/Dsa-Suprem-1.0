#include <iostream>
using namespace std;

//function decelaration
int add(int x, int y)

int main()
{
    int a;
    cout << "Enter the value of a " << endl;
    cin >> a;

    int b;
    cout << "Enter the value of b " << endl;
    cin >> b;

    int sum = add(a, b);

    cout << "Addition result is " << sum << endl;

    return 0;
}

// function defination
int add(int x, int y)
{
    int result = x + y;
    return result;
}
