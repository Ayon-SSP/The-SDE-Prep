#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void selectionsort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
                min_idx = j ;
        }
        if (arr[min_idx] != arr[i])
        {
            swap(&arr[min_idx], &arr[i]);
        }
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
    selectionsort(arr, n);
    // printing array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}