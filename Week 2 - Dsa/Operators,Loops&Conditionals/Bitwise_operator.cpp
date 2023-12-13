#include <iostream>
using namespace std;

int main()
{
    // ****** Important To Know ******
    // In Right Shift ( >> ) We can't say confidiently that number is divided by 2 Their is a catch in it 
    int a = -27;
    a = a >> 1;
    cout << a;

    // left shift (<<) mai 2 se multiply hota hai
    // int a = 12;
    // a = a << -1; -> -ve ke chase mai garbage value milti hai 
    // cout<<a;

    // bool a = false;
    // bool b = true;

    // cout << (a | b);
    // cout<< (a^b);

    // cout << (3^4) << endl;
}