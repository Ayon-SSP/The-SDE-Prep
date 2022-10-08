#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define ALL(v) v.begin(), v.end()
#define SORT(v) sort(ALL(v))
#define REVERSE(v) reverse(ALL(v))
#define MOD 1000000007

struct node {
    int u;
    int v;
    int wt; 
    node(int first, int second, int weight) {
        u = first;
        v = second;
        wt = weight;
    }
};

bool comp(node a, node b) {
    return a.wt < b.wt; 
}

struct UF 
{
    vector<int> par;
    vector<int> rank;
    UF(int n) : par(n, -1),rank(n, 0){}
    bool sameSet(int a, int b) 
    { 
        return find(a) == find(b); 
    }
    int size(int x) 
    { 
        return -par[find(x)]; 
    }
    int find(int x) 
    { 
        return par[x] < 0 ? x : par[x] = find(par[x]); 
    }
    bool join(int a, int b) 
    {
        a = find(a), b = find(b);
        if (a == b) return false;
        if(rank[a]<rank[b])
            par[a]=b;
        else if(rank[b]<rank[a])
            par[b]=a;
        else 
        {
            par[b]=a;
            rank[a]++;
        }
        return true;
    }
};

int main()
{
	
	vector<node> edges; 
    int n=6,m=7;
     
    edges.push_back(node(0,1,5));
    edges.push_back(node(0,2,10));
    edges.push_back(node(0,3,100));
    edges.push_back(node(1,3,50));
    edges.push_back(node(1,4,200));
    edges.push_back(node(3,4,250));
    edges.push_back(node(4,5,50));
	
	sort(edges.begin(), edges.end(), comp); 
	
	struct UF obj(n);
	
	int cost = 0;
	vector<pair<int,int>> mst; 
	for(auto it : edges) 
    {
	    if(obj.find(it.v) != obj.find(it.u)) 
        {
	        cost += it.wt; 
	        mst.push_back({it.u, it.v}); 
	        bool t = obj.join(it.u, it.v); 
	    }
	}
    //Printing the MST cost
	cout << "MST Cost : "<<cost << endl;
     //Printing the nodes and edges of the MST 
	for(auto it : mst) cout << it.first << " - " << it.second << endl; 
	return 0;
}