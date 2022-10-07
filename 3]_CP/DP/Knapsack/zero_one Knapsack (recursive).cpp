#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define MOD 1000000007
#define pb push_back

int knapsack(int wt[], int val[], int w, int n)
{
    if(w==0 || n==0) return 0;
    if(wt[n-1]>w) return knapsack(wt, val, w, n-1);
    else return max(val[n-1]+knapsack(wt, val, w-wt[n-1], n-1), knapsack(wt, val, w, n-1));
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
    cout<<knapsack(wt,val,w,n)<<endl;

	return 0;
}