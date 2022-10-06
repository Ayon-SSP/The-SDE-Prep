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

vvi Mmult(vvi &a, vvi &b)
{
    int n = a[0].size();
    vvi res(n, vi(n,0));
    fo(i,0,n)
    {
        fo(j,0,n)
        {
            fo(k,0,n)
            {
                res[i][j] += a[i][k]*b[k][j];
            }
        }
    }
    return res;
}

vvi Mpow(vvi &mat, int p)
{
    if(p==1) return mat;
    vvi by2 = Mpow(mat, p/2);
    vvi res = Mmult(by2, by2);
    if(p&1) res = Mmult(mat, res);
    return res;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n; cin>>n;

    vvi mat(n,vi(n));
    fo(i,0,n)
    {
        fo(j,0,n) cin>>mat[i][j];
    }

    int p; cin>>p;

    vvi res(n,vi(n));
    res = Mpow(mat, p);
    fo(i,0,n)
    {
        fo(j,0,n) cout<<res[i][j]<<" ";
        cout<<endl;
    }
    
    return 0;
}