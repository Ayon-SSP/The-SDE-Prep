#include <iostream>
using namespace std;
void countingsort(int arr[], int n)
{
    int max = arr[0];
    int output[n];
    for (int i = 1; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    // we want an array of size max element to store its apperance in array i.e if max element present is 56 in array then count array will  have a of size 56
    int count[max + 1];
    // make an array with max
    for (int i = 0; i <= max; i++)
    {
        count[i] = 0; // initialise with 0
    }

    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++; // counting repeated number with their correct place in count array
    }

    // finding cumulative sum
    for (int i = 1; i <= max; i++)
    {
        count[i] += count[i - 1];
    }
    // storing elements at their correct position in arr
    for (int i = n - 1; i >= 0; i--)
    {
        output[--count[arr[i]]] = arr[i];
    }
    // copying output array into arr;
    for (int i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }

    cout << endl;
}
void test(int arr[], int n)
{
    countingsort(arr, n);
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
int main()
{
    // int n = 10;
    int arr[] = {192, 214, 5, 21, 4, 5, 74, 732, 235, 52};
    int n = sizeof(arr) / sizeof(arr[0]);
    test(arr, n);
    print(arr, n);
}