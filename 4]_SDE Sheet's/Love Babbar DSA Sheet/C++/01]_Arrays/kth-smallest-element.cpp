// Q3) Kth smallest element

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //just a simple approach the question is asking for kth smallest value
        //just sort it and find the value at kth position.
        sort(arr+l, arr+r+1);
        return arr[k-1];
    }
};

int main(){
    int test_case;
    cin>>test_case;
    while(test_case--){
        int n;  cin>>n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int k;  cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(arr, 0, n-1, k)<<endl;
        
    }
 return 0;
}