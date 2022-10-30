
#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        vector<long long > v;
        stack<long long> s;
        s.push(arr[n-1]);
        v.push_back(-1);
        for(int i=n-2;i>=0;i--){
            while(s.empty()==false && s.top()<=arr[i]){
                s.pop();
            }
            long long a=(s.empty())?-1:s.top();
            v.push_back(a);
            s.push(arr[i]);
        }
        reverse(v.begin(),v.end());
        return v;
        // Your code here
    }
};



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}  
