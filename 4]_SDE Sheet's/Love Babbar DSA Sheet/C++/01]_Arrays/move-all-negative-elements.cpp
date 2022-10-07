//Q5) Move all negative elements to one side of the array

#include <bits/stdc++.h>
using namespace std;

// function to print the array
void printArr(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << ", ";
    cout << endl;
}

// Approach1 - Naieve approach (just use the sort function)
// Time Complexity: O(n*log(n))
// Auxiliary Space: O(n)
void approach1(vector<int> &arr, int n)
{
    sort(arr.begin(), arr.end());
    printArr(arr, n);
}

// Approach2 - Efficient approach (The idea is to simply apply the partition process of quicksort.)
// Time Complexity: O(n)
// Auxiliary Space: O(1)
void approach2(vector<int> &arr, int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            if (i != j)
                swap(arr[i], arr[j]);
            j++;
        }
    }
    printArr(arr, n);
}

// Approach3 - Efficient approach (two pointer approach)
// Time Complexity: O(n)
// Auxiliary Space: O(1)
void approach3(vector<int> &arr, int n)
{
    int l = 0, r = n-1;
    while (l <= r)
    {
        if (arr[l] < 0 && arr[r] < 0)
            l += 1;
        else if (arr[l] > 0 && arr[r] < 0)
        {
            swap(arr[l], arr[r]);
            l += 1;
            r -= 1;
        }
        else if (arr[l] > 0 && arr[r] > 0)
            r -= 1;
        else
        {
            l += 1;
            r -= 1;
        }
    }
    printArr(arr, n);
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    approach1(arr, n);
    approach2(arr, n);
    approach3(arr, n);
    return 0;
}