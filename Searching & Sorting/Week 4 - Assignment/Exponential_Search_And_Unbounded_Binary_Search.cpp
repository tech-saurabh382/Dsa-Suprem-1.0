
// ***** Important ******
// It is also called as
// Doubling Search or Golloping Search or Strazik Search

// ******* Applications ********
// 1. search in Infinite Array (Unbounded array)
// 2. Better Than Binary Search (x is nearly begning)

// T.c -> O

#include <iostream>
using namespace std;

// T.c -> O(log(2^logm / 2))

int bs(int a[], int start, int end, int x)
{
    while (start <= end)
    {
        int mid = start + (end - start);
        if (a[mid] == x)
        {
            return mid;
        }
        else if (a[mid] > x)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int expSearch(int a[], int n, int x)
{
    if (a[0] == x)
        return 0;

    int i = 1;
    // T.c -> O(log m) // yaha m kya hai ? i jaha tak jaraha hai
    while (i < n && a[i] <= x)
    {
        i = i * 2; // i *= 2; // i = i << 1;
    }
    return bs(a, i / 2, min(i, n - 1), x);
}

int main()
{
    int a[] = {3, 4, 5, 6, 11, 13, 14, 15, 56, 70};
    int n = sizeof(a) / sizeof(int);
    int x = 13;
    int ans = expSearch(a, n, x);
    cout << "Ans is " << ans << endl;
    return 0;
}