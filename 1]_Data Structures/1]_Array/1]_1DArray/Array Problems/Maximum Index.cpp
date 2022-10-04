#include <bits/stdc++.h>
using namespace std;

/* For a given array arr[], 
   returns the maximum j – i such
   that arr[j] > arr[i] */
int maxIndexDiff(int arr[], int n)
{
    int maxDiff = -1;
    int i, j;

    for (i = 0; i < n; ++i) {
        for (j = n - 1; j > i; --j) {
            if (arr[j] > arr[i] && maxDiff < (j - i))
                maxDiff = j - i;
        }
    }

    return maxDiff;
}

int main()
{
    int arr[] = { 9, 2, 3, 4, 5, 6, 7, 8, 18, 0 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxDiff = maxIndexDiff(arr, n);
    cout << "\n" << maxDiff;
    return 0;
}
