#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define MOD 1000000007
#define pb push_back

int dp[102][1002]; //given n<=100 and w<=1000

int knapsack(int wt[], int val[], int w, int n)
{
    if(w==0 || n==0) return 0;
    if(dp[n][w] != (-1)) return dp[n][w];
    if(wt[n-1]>w) return dp[n][w] = knapsack(wt, val, w, n-1);
    else return dp[n][w] = max(val[n-1]+knapsack(wt, val, w-wt[n-1], n-1), knapsack(wt, val, w, n-1));
}

int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    memset(dp, -1, sizeof(dp));
    int n=4;
    int wt[]={1,3,4,5};
    int val[]={1,9,3,7};
    int w=7;
    cout<<knapsack(wt,val,w,n)<<endl;

	return 0;
}