#include<bits/stdc++.h>
using namespace std;
#define INF 1000000000

int n,m;

vector<pair<pair<int,int>,int>>v;

void solve(int src)
{
    vector<int>dis(n+1, INF);
    dis[src] = 0;
    
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(dis[v[j].first.first] < INF)
            dis[v[j].first.second] = min(dis[v[j].first.second] , v[j].second + dis[v[j].first.first]);
        }
    }
    
    for(int i=1;i<dis.size();i++)
    cout<<dis[i]<<" ";
}

int main()
{
    cin>>n>>m;
    
    for(int i=0;i<m;i++)
    {
        int a,b,w;
        cin>>a>>b>>w;
        
        v.push_back({{a,b},w});
    }
    
    solve(1);
}

// input
// 5 8
// 1 2 -1
// 1 3 4
// 2 3 3 
// 2 4 2
// 2 5 2
// 4 3 5
// 4 2 1
// 5 4 -3
// Output
// 0 -1 2 -2 1
