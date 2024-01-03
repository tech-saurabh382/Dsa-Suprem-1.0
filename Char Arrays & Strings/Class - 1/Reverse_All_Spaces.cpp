#include <iostream>
#include <string.h>
using namespace std;

// T.c -> O(n)
// S.c -> O(1)

void replaceSpaces(char sentence[])
{
    int i = 0;
    int n = strlen(sentence); //-> O(n)

    for (int i = 0; i < n; i++)
    {
        if (sentence[i] == ' ')
        {
            sentence[i] = '@';
        }
    }
}

int main()
{

    char sentence[100];
    cin.getline(sentence, 100);

    replaceSpaces(sentence);

    cout << "Printing Sentence " << endl
         << sentence << endl;

    return 0;
}