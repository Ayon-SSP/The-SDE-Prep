// Kadane's algorithm to find the maximum sum in a subarray
#include<bits/stdc++.h>
using namespace std;
int kadane(int arr[], int n){
    int currentsum=0;
    int maxsum = INT_MIN;
    for(int i=0; i<n; i++){
        currentsum += arr[i];
        if(currentsum<0)
            currentsum=0;
        maxsum = max(maxsum, currentsum);
    }
    return maxsum;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<kadane(arr, n)<<endl;
    return 0;
}