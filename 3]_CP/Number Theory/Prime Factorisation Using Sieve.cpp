#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back
#define fo(i,a,b) for(int i=a ; i<b ; i++)
#define foe(i,a,b) for(int i=a ; i<=b ; i++)
#define endl '\n'
#define ff first
#define ss second
#define MOD 1000000007

int arr[1000001];

void prime_sieve()      // time complexity : O(log(n))
{
    memset(arr, -1, sizeof(arr));
    for(int i=2 ; i*i<=1000000 ; i++)
    {
        if(arr[i] == -1)
        {
            for(int j=i ; j<=1000000 ; j+=i)
            {
                if(arr[j] == -1) arr[j] = i;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    prime_sieve();
    int n; cin>>n;
    while(n>1)
    {
        cout<<arr[n]<<" ";
        n /= arr[n];
    }
    
    return 0;
}