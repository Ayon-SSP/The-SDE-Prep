#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define MOD 1000000007
#define pb push_back

bool subsetSum(int arr[], int n, int sum)
{
    bool dp[n+1][sum+1];
    for(int i=0 ; i<=n ; i++)
    {
        for(int j=0 ; j<=sum ; j++)
        {
            if(i==0) dp[i][j]=false;
            if(j==0) dp[i][j]=true;
        }
    }
    for(int i=1 ; i<=n ; i++)
    {
        for(int j=1 ; j<=sum ; j++)
        {
            if(arr[i-1]<=j) dp[i][j] = (dp[i-1][j-arr[i-1]] || dp[i-1][j]);
            else dp[i][j] = dp[i-1][j];
        }
    }
    return dp[n][sum];
}

bool equalSum(int arr[], int n)
{
    int sum=0;
    for(int i=0 ; i<n ; i++) sum+=arr[i];
    if(sum & 1) return false;
    else return(subsetSum(arr, n, sum/2));
}

int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n; n=5;
    int arr[]={1,2,3,4,4};
    if(equalSum(arr, n)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
	return 0;
}