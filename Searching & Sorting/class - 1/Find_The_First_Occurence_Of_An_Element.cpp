#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int firstOccurrence(vector<int> v, int target)
{
    int s = 0;
    int e = v.size() - 1;
    int ans = -1;

    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (v[mid] == target)
        {
            ans = mid;
            // ans store then left
            e = mid - 1;
        }
        else if (target > v[mid])
        {
            // right me search
            s = mid + 1;
        }
        else if (target < v[mid])
        {
            // left search
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{

    vector<int> v{1, 3, 4, 4, 4, 4, 6, 7};
    int target = 4;
    int indexOfFirstOcc = firstOccurrence(v, target);

    cout << "ans is " << indexOfFirstOcc << endl;

    auto ans2 = lower_bound(v.begin(), v.end(), target);
    cout << "ans2 is " << ans2-v.begin() << endl;

    return 0;
}