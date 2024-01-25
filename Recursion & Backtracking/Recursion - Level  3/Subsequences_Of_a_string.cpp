#include <iostream>
#include <vector>
using namespace std;

void printSubsequences(string str, string output, int i, vector<string> &v)
{
    // base case
    if (i >= str.length())
    {
        // cout << output << endl;
        // store
        v.push_back(output);
        return;
    }

    // exclude
    printSubsequences(str, output, i + 1, v);

    // include
    // below line is responsible for concatenation of output string
    // ans ith character of str string
    // output.push_back(str[i]);
    // printSubsequences(str, output, i + 1, v);
    printSubsequences(str, output + str[i], i + 1, v);
}

int main()
{
    string str = "abcd";
    string output = "";
    vector<string> v;
    int i = 0;
    printSubsequences(str, output, i, v);

    cout << "Printing all subsequences " << endl;
    for (auto val : v)
    {
        cout << val << " ";
    }
    cout << endl;

    cout << endl
         << "Size of vector is: " << v.size() << endl;

    return 0;
}