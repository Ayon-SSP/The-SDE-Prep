// Q1)Reverse the array
// Solution:

#include <bits/stdc++.h>
using namespace std;
int main()
{
    // input size of an array
    int n;
    cin >> n;

    // Declaring array
    int arr[n];

    // Input elements into the array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;

    // Reverse array logic
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }

    // Print the result.
    for (int i = 0; i < n; i++)
    {
        cout <<arr[i]<<" ";
    }

    return 0;
}