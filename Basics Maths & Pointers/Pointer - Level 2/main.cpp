#include <iostream>
using namespace std;

int main()
{

    // int arr[4] = {12, 44, 66, 18};

    // cout << arr << endl;
    // cout << arr[0] << endl;
    // cout << &arr << endl;
    // cout << &arr[0] << endl;

    // int *p = arr;
    // cout << p << endl;
    // cout << &p << endl;

    // cout << *arr << endl;
    // cout << arr[0] << endl;
    // cout << *arr + 1 << endl;
    // cout << *(arr) + 1 << endl;
    // cout << *(arr + 1) << endl;
    // cout << arr[1] << endl;
    // cout << *(arr + 2) << endl;
    // cout << arr[2] << endl;
    // cout << *(arr + 3) << endl;
    // cout << arr[3] << endl;

    // int i = 0;
    // cout << arr[i] << endl;
    // cout << i[arr] << endl;
    // cout << *(arr + i) << endl;
    // cout << *(i + arr) << endl;

    // arr = arr + 2; // -> it is not possible

    // int *p = arr;
    // p = p + 2;

    // int arr[10];
    // cout << sizeof(arr) << endl;

    // int *p = arr;
    // cout << sizeof(p) << endl;

    // cout << sizeof(*p) << endl;

    // char ch[10] = "Babbar";
    // char *c = ch;

    // cout << ch << endl;
    // cout << &ch << endl;
    // cout << ch[0] << endl;

    // cout << &c << endl;
    // cout << *c << endl;
    // cout << c << endl;

    // char name[9] = "SherBano";
    // char *c = &name[0];

    // cout << name << endl;
    // cout << &name << endl;
    // cout << *(name + 3) << endl;
    // cout << c << endl;
    // cout << &c << endl;
    // cout << *(c + 3) << endl;
    // cout << c + 2 << endl;
    // cout << *c << endl;
    // cout << c + 8 << endl;

    // char ch = 'k';
    // char *cptr = &ch;

    // cout << cptr << endl;

    char name[10] = "babbar";
    cout << name << endl;

    char *c = "babbar"; // -> BAD PRACTICE
    cout << c << endl;

    return 0;
}