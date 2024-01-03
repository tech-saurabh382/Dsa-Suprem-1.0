#include <iostream>
#include <string.h>
using namespace std;

// T.c -> O(n)
// S.c -> O(1)

int getLength(char name[])
{
    int length = 0;
    int i = 0;

    while (name[i] != '\0')
    {
        length++;
        i++;
    }
    return length;
}

int main()
{
    char name[100];
    cin >> name;

    cout << "Length is: " << getLength(name) << endl;
    cout << "Length is ->  " << strlen(name) << endl;

    return 0;
}