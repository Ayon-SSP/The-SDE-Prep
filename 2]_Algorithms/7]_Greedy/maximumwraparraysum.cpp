#include<bits/stdc++.h>
using namespace std;

int kadane(int arr[], int n){
    int currentsum=0;
    int maxsum=INT_MIN;
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

    int nonwrapsum = kadane(arr, n), wrapsum;
    
    int totalsum=0;
    for(int i=0; i<n; i++){
        totalsum += arr[i];
        arr[i] = -arr[i];
    }
    wrapsum = totalsum + kadane(arr, n);
    cout<<max(wrapsum, nonwrapsum)<<endl;
    return 0;
}