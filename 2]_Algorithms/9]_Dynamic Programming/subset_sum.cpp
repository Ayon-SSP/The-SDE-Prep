// To find whether a subset of array has given sum or not.

#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool subsetSum(ll a[], ll n, ll sum)
{
    bool dp[n+1][sum+1];
    memset(dp, false, sizeof(dp));
    
    for(ll i=0;i<n+1;i++)
    {
        for(ll j=0;j<sum+1;j++)
        {
            if(i==0 && j==0)
            dp[i][j] = true;

            else if(i == 0)
            dp[i][j] = false;

            else if(j == 0)
            dp[i][j] = true;
        }
    }

    for(ll i=1;i<n+1;i++)
    {
        for(ll j=1;j<sum+1;j++)
        {
            if(a[i-1] <= j)
            dp[i][j] = (dp[i-1][j-a[i-1]]) || (dp[i-1][j]);

            else
            dp[i][j] = dp[i-1][j];
        }
    }

    return dp[n][sum];
}

int main()
{
    int n;
    cin>>n;

    ll a[n];
    for(ll i=0;i<n;i++)
    cin>>a[i];
    
    ll sum;
    cin>>sum;
    
    bool flag = subsetSum(a,n,sum);
    
    if(flag == true)
    cout<<"Subset present with given sum";

    else
    cout<<"Subset not present";
}

// Time complexity -- O(n*sum)
// Space complexity -- O(n*sum)
