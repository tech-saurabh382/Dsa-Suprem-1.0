#include <iostream>
#include <vector>
using namespace std;

// bool checkKey(string &str, int i, int &n, char &key)
// {

//     // base case
//     if (i >= n)
//     {
//         // key not found
//         return false;
//     }

//     // 1 case solve karna hai
//     if (str[i] == key)
//     {
//         return true;
//     }
//     // baaki recursion sambhal lega
//     return checkKey(str, i + 1, n, key);
//     // bool ans = checkKey(str, i + 1, n, key);
//     // return ans;
// }

// For Printing the index of the element
// int checkKey(string &str, int i, int &n, char &key)
// {

//     // base case
//     if (i >= n)
//     {
//         // key not found
//         return -1;
//     }

//     // 1 case solve karna hai
//     if (str[i] == key)
//     {
//         return i;
//     }
//     // baaki recursion sambhal lega
//     return checkKey(str, i + 1, n, key);
//     // bool ans = checkKey(str, i + 1, n, key);
//     // return ans;
// }

// For Printing Total occurence of the element
// void checkKey(string &str, int i, int &n, char &key)
// {

//     // base case
//     if (i >= n)
//     {
//         // key not found
//         return;
//     }

//     // 1 case solve karna hai
//     if (str[i] == key)
//     {
//         cout << "Found at:  " << i << endl;
//     }
//     // baaki recursion sambhal lega
//     return checkKey(str, i + 1, n, key);
//     // bool ans = checkKey(str, i + 1, n, key);
//     // return ans;
// }

// For Storing the data
// void checkKey(string &str, int i, int &n, char &key, vector<int> &ans)
// {

//     // base case
//     if (i >= n)
//     {
//         // key not found
//         return;
//     }

//     // 1 case solve karna hai
//     if (str[i] == key)
//     {
//         // Store in vector
//         ans.push_back(i);
//     }
//     // baaki recursion sambhal lega
//     return checkKey(str, i + 1, n, key, ans);
//     // bool ans = checkKey(str, i + 1, n, key);
//     // return ans;
// }

// For Counting
void checkKey(string &str, int i, int &n, char &key, int &count)
{

    // base case
    if (i >= n)
    {
        // key not found
        return;
    }

    // 1 case solve karna hai
    if (str[i] == key)
    {
        // Store in vector
        // ans.push_back(i);
        count++;
    }
    // baaki recursion sambhal lega
    return checkKey(str, i + 1, n, key, count);
    // bool ans = checkKey(str, i + 1, n, key);
    // return ans;
}

int main()
{

    string str = "lovebabbar";
    int n = str.length();

    char key = 'b';

    int i = 0;
    // int ans = checkKey(str, i, n, key);
    // cout << "Answer is " << ans << endl;

    // checkKey(str, i, n, key);

    // vector<int> ans;

    // checkKey(str, i, n, key, ans);
    // cout << "Printing Ans is: " << endl;

    // for (auto val : ans)
    // {
    //     cout << val << " ";
    // }
    // cout << endl;

    int count = 0;
    checkKey(str, i, n, key, count);
    cout << count << endl;

    return 0;
}