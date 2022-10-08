#include<iostream>
using namespace std;

void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
 void bubblesort(int arr[],int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[i]>arr[j])
            swap(&arr[i],&arr[j]);
        }
    }
    
 }
int main(){
    int n;
    cout<<"Enter Size  of Array\n";
    cin>>n;
    int arr[n];
    //array input
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    bubblesort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}