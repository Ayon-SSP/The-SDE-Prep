#include <bits/stdc++.h>
using namespace std;

int findPlatform(int arr[], int dep[], int n)
{
    // Insert all the times (arr. and dep.)
    // in the multiset.
    multiset<pair<int, char> > order;
    for (int i = 0; i < n; i++) {

        // If its arrival then second value
        // of pair is 'a' else 'd'
        order.insert(make_pair(arr[i], 'a'));
        order.insert(make_pair(dep[i], 'd'));
    }

    int result = 0;
    int plat_needed = 0;

    // Start iterating the multiset.
    for (auto it : order) {

        // If its 'a' then add 1 to plat_needed
        // else minus 1 from plat_needed.
        if (it.second == 'a')
            plat_needed++;
        else
            plat_needed--;

        if (plat_needed > result)
            result = plat_needed;
    }
    return result;
}

// Driver code
int main()
{
    int arr[] = { 900, 940, 950, 1100, 1500, 1800 };
    int dep[] = { 910, 1200, 1120, 1130, 1900, 2000 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Minimum Number of Platforms Required = "
         << findPlatform(arr, dep, n);
    return 0;
}
