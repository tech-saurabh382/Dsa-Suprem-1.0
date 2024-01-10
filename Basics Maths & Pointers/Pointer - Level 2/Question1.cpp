#include <iostream>
using namespace std;

int update(int *p)
{
    cout << "Address stored inside p is: " << p << endl;
    cout << "Address of p is " << &p << endl;
    *p = *p + 10;
}

int main()
{
    int a = 5;
    cout << "Address of a is " << &a << endl;
    int *ptr = &a;
    cout << "Address stored in ptr is: " << ptr << endl;
    cout << "Address of ptr is: " << &ptr << endl;
    update(ptr);
    cout << "Value of a is " << a << endl;

    return 0;
}