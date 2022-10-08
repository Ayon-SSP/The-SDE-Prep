#include <iostream>
using namespace std;
void merge(int arr[], int lb, int mid, int ub)
{
    int i = lb;
    int j = mid + 1;
    int k = 0;
    int t[ub-lb+1];// tempory array to store operation in array
    while (i <= mid && j <= ub)
    {
        if (arr[i] <= arr[j])
        {
            t[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            t[k] = arr[j];
            j++;
            k++;
        }
    }
    if (i > mid)
    {
        while (j <= ub)
        {
            t[k] = arr[j];
            j++;
            k++;
        }
   }
    else
    {
        while (i <= mid)
        {
            t[k] = arr[i];
            i++;
            k++;
        }
    }
    int p=0;    //copy down the whole array in old array
    for (int x = lb; x <= ub; x++)
    {
        arr[x] = t[p];
        p++;
    }
}
void mergesort(int arr[],int lb,int ub){
    if(lb<ub){
        int mid=(lb+ub)/2;
        mergesort(arr,lb,mid);
        mergesort(arr,mid+1,ub);
        merge(arr,lb,mid,ub);
    }
}
int main()
{
    int n;
    cout<<"Enter size of array\n";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    mergesort(arr,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}