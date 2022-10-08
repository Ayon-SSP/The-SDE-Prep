#include <iostream>
using namespace std;

void insertionsort(int arr[], int n)
{
    int key, j;
    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (key < arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main()
{
    int n;
    cout << "Enter size of Array\n";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    insertionsort(arr,n);
    // for printing Array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}