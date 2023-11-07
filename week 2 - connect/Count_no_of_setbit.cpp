#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int ans = 0;

    while (n != 0)
    {
        if (n & 1)
        {
            cout << "got set bit " << ans << endl;
            // found one set bit, so increment set bot count
            ans++;
        }
        // right shift
        n = n >> 1;
    }
    cout << "number of set bits " << ans << endl;

    return 0;
}