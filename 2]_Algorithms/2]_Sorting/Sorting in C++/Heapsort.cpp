 #include <iostream>
using namespace std;
// swap function
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    return;
}
// heapify function
void heapify(int arr[], int i, int n)
{
    if (2 * i <= n && (arr[i] < arr[2 * i] && arr[2 * i] >= arr[2 * i + 1]))
    {
        swap(&arr[i], &arr[2 * i]);
        heapify(arr, 2 * i, n);
    }
    else if (2 * i + 1 <= n && (arr[i] < arr[2 * i + 1]))
    {
        swap(&arr[i], &arr[2 * i + 1]);
        heapify(arr, 2 * i + 1, n);
    }
    else
        return;
}
// max heap function
void build_max_heap(int arr[], int n)
{
    for (int i = n / 2; i >= 1; i--)
    {
        heapify(arr, i, n);
    }
}

// heapsort function
void heapsort(int arr[], int n)
{
    if (n == 1)
        return;
    else
    {
        build_max_heap(arr, n);
        swap(&arr[1], &arr[n]);
        n--;
        heapify(arr, n, 1);
        heapsort(arr, n);
    }
}

int main()
{
    int n;
    cout << "Enter size of Array\n";
    cin >> n;
    int arr[n + 1];

    cout << "Enter Elements of Array\n";
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    // heap sorting
    heapsort(arr, n);
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
}
