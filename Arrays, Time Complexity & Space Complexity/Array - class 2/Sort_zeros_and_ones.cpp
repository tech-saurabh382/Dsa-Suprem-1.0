#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr{0, 1, 1, 0, 1, 0, 1, 0, 1, 1};
    int start = 0; // -> start position pr zero chaiye
    int end = arr.size() - 1; // -> end position pr one chaiye
    int i = 0;

    while (i != end) // -> loop Break condition (jab i == end hojaye tab loop se bahar aajana)
    {
        if (arr[i] == 0)
        {
            swap(arr[i], arr[start]);
            i++;
            start++;
        }
        else
        {
            swap(arr[i], arr[end]);
            end--;
        }
    }

    for (auto val : arr)
    {
        cout << val << " ";
    }

    return 0;
}