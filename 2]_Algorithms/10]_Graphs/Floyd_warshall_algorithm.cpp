#include<bits/stdc++.h>
using namespace std;
#define INF 10000000

int graph[405][405];
int dis[405][405];

int main()
{
    int n,m;
    cin>>n>>m;
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        graph[i][j] = INF;
    }
    
    while(m--)
    {
        int a,b,w;
        cin>>a>>b>>w;
        graph[a][b] = w;
    }
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i == j)
            dis[i][j] = 0;
            else
            dis[i][j] = graph[i][j];
        }
    }
    
    for(int k=1;k<=n;k++)
    {
        for(int i=1;i<=n;i++) 
        {
            for(int j=1;j<=n;j++)
            {
                if (dis[i][k] < INF && dis[k][j] < INF)
                dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]); 
            }
        }
    }
    
    int q;
    cin>>q;
    
    while(q--)
    {
        int x,y;
        cin>>x>>y;
        if(dis[x][y] == INF)
        cout<<"-1\n";
        else
        cout<<dis[x][y]<<"\n";
    }
}
