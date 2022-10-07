#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define MOD 1000000007
#define pb push_back
#define endl '\n'

void fillTable(int n, int range, bool dp[][1000000], int arr[])
{
    for(int i=0 ; i<=n ; i++)
    {
        for(int j=0 ; j<=range ; j++)
        {
            if(i==0) dp[i][j]=false;
            if(j==0) dp[i][j]=true;
        }
    }
    for(int i=1 ; i<=n ; i++)
    {
        for(int j=1 ; j<=range ; j++)
        {
            if(arr[i-1]>j) dp[i][j] = dp[i-1][j];
            else dp[i][j] =  dp[i-1][j] || dp[i-1][j-arr[i-1]];
        }
    }
}

int minimumDiff(int arr[], int n, int range)
{
    bool dp[n+1][1000000];
    fillTable(n, range, dp, arr);
    int ans=INT_MAX;
    for(int i=0 ; i<=(range/2) ; i++)
    {
        if(dp[n][i])
        {
            ans = min(ans,range-2*i);
        }
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n=3;
    int arr[]={1,2,7};
    int range=0;
    for(int i=0 ; i<n ; i++) range+=arr[i];
    cout<<minimumDiff(arr, n, range)<<endl;
    
    return 0;
}