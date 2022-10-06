#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define MOD 1000000007
#define pb push_back

bool subsetSum(int arr[], int n, int sum)
{
    if(sum==0) return true;
    if(n==0 && sum!=0) return false;
    if(arr[n-1]>sum) return subsetSum(arr, n-1, sum);
    else return (subsetSum(arr, n-1, sum-arr[n-1]) || subsetSum(arr, n-1, sum));
}

int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n; n=5;
    int arr[]={0,0,7,1,9};
    int sum=11;
    if(subsetSum(arr, n, sum)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
	return 0;
}