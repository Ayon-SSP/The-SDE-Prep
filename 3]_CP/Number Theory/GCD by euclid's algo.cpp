#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define MOD 1000000007

// Time Complexity = O(log(max(a,b)))
 
ll GCD(ll a, ll b)
{
    if(b==0) return a;
    else return GCD(b,a%b);
}

int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    ll a,b;
    cin>>a>>b;
    cout<<GCD(a,b)<<endl;
    
	return 0;
}

