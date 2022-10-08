//Q)13 Kadane's Algorithm

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(vector<int> &arr, int n){
        
        int maxi = arr[0];
        int curr = arr[0];
        
        for(int i = 1; i<n; i++){
            curr = max(arr[i], curr+arr[i]);
            maxi = max(maxi, curr);
        }
        return maxi;
    }
};

int main(){
    int t;  cin>>t;
    while(t--){
        int n;  cin>>n;
        vector<int> arr(n);
        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }

        Solution ob;
        cout<<ob.maxSubarraySum(arr, n)<<endl;
    }
 return 0;
}