#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(char first, char second)
{
    return first > second;
}

bool compare(int a, int b)
{
    return a > b;
}

int main()
{
    string s = "babbar";
    sort(s.begin(), s.end(), cmp);

    cout << s << endl;

    vector<int> v{5, 3, 1, 2, 4};
    sort(v.begin(), v.end(), compare);

    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    vector<string> str{"love", "babbar", "rahul", "sandeep"};

    return 0;
}