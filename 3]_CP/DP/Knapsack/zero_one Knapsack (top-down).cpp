#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define MOD 1000000007
#define pb push_back

int knapsack(int wt[], int val[], int n, int w)
{
    int dp[n+1][w+1];
    for(int i=0 ; i<=n ; i++)
    {
        for(int j=0 ; j<=w ; j++)
        {
            if(i==0 || j==0) dp[i][j]=0;
        }
    }
    for(int i=1 ; i<=n ; i++)
    {
        for(int j=1 ; j<=w ; j++)
        {
            if(wt[i-1]<=j) dp[i][j] = max(val[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);
            else dp[i][j] = dp[i-1][j];
            
        }
    }

    return dp[n][w];
}

int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n=4;
    int wt[]={1,3,4,5};
    int val[]={10,9,3,7};
    int w=7;
    cout<<knapsack(wt,val,n,w)<<endl;

	return 0;
}