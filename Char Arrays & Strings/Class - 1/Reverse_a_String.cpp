#include <iostream>
#include <string.h>
using namespace std;

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

void reverseCharArray(char arr[])
{
    int i = 0;
    int n = getLength(arr);

    int j = n - 1;

    while (i <= j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

int main()
{
    char name[100];
    cin >> name;

    cout << "Length is: " << getLength(name) << endl;
    cout << "Length is ->  " << strlen(name) << endl;

    cout << "Initially " << name << endl;
    reverseCharArray(name);
    cout << "After Reversal Process " << name << endl;

    return 0;
}