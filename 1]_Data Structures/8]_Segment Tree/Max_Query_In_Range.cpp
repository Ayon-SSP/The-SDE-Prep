#include <bits/stdc++.h>
using namespace std;
 
int getMid(int s, int e)
{
    return s + (e - s) / 2;
}

int MaxUtil(int* st, int ss, int se, int l,
            int r, int node)
{
    if (l <= ss && r >= se)
        return st[node];

    if (se < l || ss > r)
        return -1;
 
    int mid = getMid(ss, se);
     
    return max(MaxUtil(st, ss, mid, l, r,
                       2 * node + 1),
               MaxUtil(st, mid + 1, se, l,
                       r, 2 * node + 2));
}
 

void updateValue(int arr[], int* st, int ss, int se,
                 int index, int value, int node)
{
    if (index < ss || index > se)
    {
        cout << "Invalid Input" << endl;
        return;
    }
     
    if (ss == se)
    {  
        // update value in array and in segment tree
        arr[index] = value;
        st[node] = value;
    }
    else {
            int mid = getMid(ss, se);
             
            if (index >= ss && index <= mid)
                updateValue(arr, st,
                            ss, mid, index,
                            value, 2 * node + 1);
            else
                updateValue(arr,
                            st, mid + 1, se,
                            index,
                            value, 2 * node + 2);
             
            st[node] = max(st[2 * node + 1],
                       st[2 * node + 2]);
    }
    return;
}
 
// Return max of elements in range from
// index l (query start) to r (query end).
int getMax(int* st, int n, int l, int r)
{
    // Check for erroneous input values
    if (l < 0 || r > n - 1 || l > r)
    {
        printf("Invalid Input");
        return -1;
    }
 
    return MaxUtil(st, 0, n - 1, l, r, 0);
}
 
int constructSTUtil(int arr[], int ss, int se,
                    int* st, int si)
{
    // If there is one element in array, store
    // it in current node of
    // segment tree and return
    if (ss == se)
    {
        st[si] = arr[ss];
        return arr[ss];
    }
 
    // If there are more than one elements, then
    // recur for left and right subtrees and
    // store the max of values in this node
    int mid = getMid(ss, se);
     
    st[si] = max(constructSTUtil(arr, ss, mid, st,
                                 si * 2 + 1),
                 constructSTUtil(arr, mid + 1, se,
                                 st, si * 2 + 2));
     
    return st[si];
}
 
/* Function to construct segment tree
   from given array.
   This function allocates memory for
   segment tree.*/
int* constructST(int arr[], int n)
{
    // Height of segment tree
    int x = (int)(ceil(log2(n)));
 
    // Maximum size of segment tree
    int max_size = 2 * (int)pow(2, x) - 1;
 
    int* st = new int[max_size];
 
    constructSTUtil(arr, 0, n - 1, st, 0);
 
    // Return the constructed segment tree
    return st;
}
 