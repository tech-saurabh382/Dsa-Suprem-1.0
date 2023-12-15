#include <iostream>
#include <vector>
using namespace std;

int findUniqueElement(vector<int> arr)
{
    int ans = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }

    return ans;
}

int main()
{
    int n;
    cout << "Enter the size of the array " << endl;
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements " << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    int uniqueElement = findUniqueElement(arr);

    cout << "Unique Elements is " << uniqueElement << endl;

    return 0;
}