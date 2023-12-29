#include <iostream>
#include <string.h>
using namespace std;

bool compareString(string a, string b)
{

    if (a.length() != b.length())
    {
        return false;
    }
    else
    {
        int j = 0;
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] != b[j])
            {
                return false;
            }
            j++;
        }
    }
    return true;
}

int main()
{
    // // string create
    // string str;
    // // input string
    // cin >> str;
    // // getline(cin, str);
    // // pinting
    // cout << str << endl;

    // cout << "Length is: " << str.length() << endl;
    // cout << "isEmpty: " << str.empty() << endl;
    // str.push_back('A');

    // cout << str << endl;

    // str.pop_back();

    // cout << str << endl;

    // cout << str.substr(0, 6) << endl;

    // cout << str << endl;

    // string a = "Love";
    // string b = "Lover";

    // if (a.compare(b) == 0)
    // {
    //     cout << "a and b are exactly same strings" << endl;
    // }
    // else
    // {
    //     cout << "a and b are not same" << endl;
    // }

    // string x = "abcd";
    // string y = "bcda";

    // cout << x.compare(y) << endl;

    // string sentence = "Hello jee kaise hai saare";
    // string target = "Everyone";

    // // cout << sentence.find(target)<<endl;
    // if (sentence.find(target) == std::string::npos)
    // {
    //     cout << "Not Found" << endl;
    // }

    // string str = "This is my first message";
    // string word = "Saurabh";

    // str.replace(11, 5, "second");

    // cout << str << endl;

    string str = "ABCDEFGHIJKLMNOP";
    str.erase(10, 10);
    cout << str;

    return 0;
}