#include <iostream>
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

void convertIntoUpperCase(char arr[])
{
    int n = getLength(arr);

    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] - 'a' + 'A';
    }
}

int main()
{
    char arr[100] = "saurabh";
    convertIntoUpperCase(arr);
    cout << arr << endl;

    return 0;
}