#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define MOD 1000000007

// Time Complexity = O(log(e))

ll modExp(ll b, ll e)
{
    if(e==0) return 1;
    else if(e & 1) return (b*modExp((b*b)%MOD,(e-1)/2))%MOD;
    else return modExp((b*b)%MOD,e/2);
}

int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    ll e,b;
    cin>>b>>e;
    cout<<modExp(b,e)<<endl;
    
	return 0;
}