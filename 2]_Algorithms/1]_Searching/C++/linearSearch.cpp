#include <bits/stdc++.h>
using namespace std;

// this function takes a vector in which we will apply linear Search and a target which we are trying to find
// if the target was found the function will return its position
// else it will return -1 ( for not found )

int linearSearch(vector<int> arr, int target)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (target == arr[i])
            return i;
    }
    return -1;
}

//testing
int main()
{
    vector<int> arr = {1, 4, 2, 6, 5, 8, 3};
    int target1 = 3;
    int target2 = 9;

    cout << "For target 1 ( " << target1 << " ) ,applying linear search" << endl;
    int pos1 = linearSearch(arr, target1);
    if (pos1 != -1)
    {
        cout << "target found at position: " << pos1 << endl;
    }
    else
    {
        cout << "target not present" << endl;
    }

    cout << "\nFor target 2 ( " << target2 << " ) ,applying linear search" << endl;

    int pos2 = linearSearch(arr, target2);
    if (pos2 != -1)
    {
        cout << "target found at position: " << pos1 << endl;
    }
    else
    {
        cout << "target not present" << endl;
    }

    return 0;
}