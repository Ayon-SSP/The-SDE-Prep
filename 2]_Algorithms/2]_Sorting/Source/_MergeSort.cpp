"Merge sort"
#include <iostream>

using namespace std;

void msort(int *a, int n)
{
    if (n == 0)
    {
        cout<<"Array is empty.";
        return;
    }
    if (n < 2)
    {
        return;
    }
    int start, end, curr, middle, *temp;
    middle = n / 2;
    msort(a, middle);
    msort(a + middle, n - middle);
    temp = new int[n];
    for (start = 0, end = middle, curr = 0; curr < n; curr++)
    {
        if (start == middle)
        {
            temp[curr] = a[end++];
        }
        else if (end == n)
        {
            temp[curr] = a[start++];
        }
        else if (a[end] < a[start])
        {
            temp[curr] = a[end++];
        }
        else
        {
            temp[curr] = a[start++];
        }
    }
    for (start = 0; start < n; start++)
    {
        a[start] = temp[start];
    }
    delete temp;
};

int main(void)
{
    cout<<"\nBefore Merge Sort:\n";
    int arr2[5] = {5, 4, 1, 2, 3};
    for (int i = 0; i < 5; i++)
    {
        cout<<arr2[i];
    }
    msort(arr2, 5);
    cout<<"\nAfter Merge Sort:\n";
    for (int i = 0; i < 5; i++)
    {
        cout<<arr2[i];
    }
    cout<<"\n";
    return 0;
}