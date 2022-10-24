#include <bits/stdc++.h>
using namespace std;

// this function takes a vector in which we will apply binary Search and a target which we are trying to find
// if the target was found the function will return its position
// else it will return -1 ( for not found )

// this is an iterative approach
int binarySearchIterative(vector<int> arr, int target)
{
    int n = arr.size();
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (target == arr[mid])
            return mid;
        else if (target < arr[mid])
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}
// this function takes a vector in which we will apply binary Search , a target which we are trying to find and a start & end index
// if the target was found the function will return its position
// else it will return -1 ( for not found )

// this is a example of recursive binary search
int binarySearchRecursive(vector<int> arr, int target, int start, int end)
{
    if (start > end)
        return -1;
    int mid = start + (end - start) / 2;
    if (target == arr[mid])
        return mid;
    else if (target < arr[mid])
        return binarySearchRecursive(arr, target, start, mid - 1);
    else
        return binarySearchRecursive(arr, target, mid + 1, end);
}

// testing
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    int target1 = 3;
    int target2 = 9;

    cout << "For target 1 ( " << target1 << " ) ,applying binary search\n"
         << endl;

    cout << "Iterative approach" << endl;
    int pos1 = binarySearchIterative(arr, target1);
    if (pos1 != -1)
    {
        cout << "target found at position: " << pos1 << endl;
    }
    else
    {
        cout << "target not present" << endl;
    }
    cout << endl;
    cout << "Recursive approach" << endl;
    int pos2 = binarySearchRecursive(arr, target1, 0, arr.size() - 1);
    if (pos2 != -1)
    {
        cout << "target found at position: " << pos2 << endl;
    }
    else
    {
        cout << "target not present" << endl;
    }

    cout << "\nFor target 2 ( " << target2 << " ) ,applying binary search\n"
         << endl;

    cout << "Iterative approach" << endl;
    int pos3 = binarySearchIterative(arr, target2);
    if (pos3 != -1)
    {
        cout << "target found at position: " << pos3 << endl;
    }
    else
    {
        cout << "target not present" << endl;
    }
    cout << endl;
    cout << "Recursive approach" << endl;

    int pos4 = binarySearchRecursive(arr, target2, 0, arr.size() - 1);
    if (pos4 != -1)
    {
        cout << "target found at position: " << pos4 << endl;
    }
    else
    {
        cout << "target not present" << endl;
    }

    return 0;
}