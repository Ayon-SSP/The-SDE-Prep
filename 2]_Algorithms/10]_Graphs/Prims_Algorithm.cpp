#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define ALL(v) v.begin(), v.end()
#define SORT(v) sort(ALL(v))
#define REVERSE(v) reverse(ALL(v))
#define MOD 1000000007
//int fac[100];

struct graph 
{
 struct edge {
     int u, v;
     edge(int u, int v): u(u), v(v) {}
 };
 
 int n, m;
 vector<edge> edges;
 vector<std::vector<int>> adj;
 vector<std::vector<pair<int,int>>> adj1;
 
 graph(): n(), m() {}
 graph(int n, int m = 0): n(n), m(), adj(n),adj1(n) 
 {
     edges.reserve(m);
 }
 
 void add_edge(int u, int v) 
 {
     adj[u].push_back(v);
     adj[v].push_back(u);
     edges.emplace_back(u, v);
     //return m++;
 }
 void add_edgeweight(int u, int v,int w) 
 {
     adj1[u].push_back(make_pair(v,w));
     adj1[v].push_back(make_pair(u,w));
 }
};

void prims(graph g,int n,int src)
{
    vector<int> dist(n,INT_MAX);
    dist[src] = 0;
    priority_queue <pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > pq;
    pq.push({0,src});
    int parent[n]; 
      
    int key[n]; 
      
    bool mstSet[n]; 
  
    for (int i = 0; i < n; i++) 
        key[i] = INT_MAX, mstSet[i] = false; 
    key[0] = 0; 
    parent[0] = -1; 
    pq.push({0, 0});


    while(!pq.empty())
    { 
        int u = pq.top().second; 
        pq.pop(); 
        
        mstSet[u] = true; 
        
        for (auto it : g.adj1[u]) 
        {
            int v = it.first;
            int weight = it.second;
            if (mstSet[v] == false && weight < key[v]) 
            {
                parent[v] = u;
		        key[v] = weight; 
                pq.push({key[v], v});    
            }
        }
            
    }
    //Printing the nodes and edges of the MST 
    for (int i = 1; i < n; i++) 
    {
        cout << parent[i] << " - " << i <<" \n";
    }
        
        
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n=6,m=7;
    struct graph g(n,m); 
    g.add_edgeweight(0,1,5);
    g.add_edgeweight(0,2,10);
    g.add_edgeweight(0,3,100);
    g.add_edgeweight(1,3,50);
    g.add_edgeweight(1,4,200);
    g.add_edgeweight(3,4,250);
    g.add_edgeweight(4,5,50);
    //0 1 5 
    // 0 2 10 
    // 0 3 100 
    // 1 3 50 
    // 1 4 200
    // 3 4 250
    // 4 5 50 
    prims(g,n,0);
    return 0;
}

