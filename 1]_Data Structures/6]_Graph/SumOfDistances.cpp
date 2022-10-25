// 834. Sum of Distances in Tree
// There is an undirected connected tree with n nodes labeled from 0 to n - 1 and n - 1 edges.

// You are given the integer n and the array edges where edges[i] = [ai, bi] indicates that there is an edge between nodes ai and bi in the tree.

// Return an array answer of length n where answer[i] is the sum of the distances between the ith node in the tree and all other nodes.

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> count,res;
    
    void comp(int x,int p,vector<vector<int>> &adj) {
        for(auto u:adj[x]) {
            if(u==p)
                continue;
            
            comp(u,x,adj);
            
            count[x]+=count[u];
            
            res[x] += res[u]+count[u];
        }
        
        count[x]+=1;
    }
    
    void dfs(int x,int p,vector<vector<int>> &adj,int n) {
        for(auto u:adj[x]) {
            if(u==p)
                continue;
            
            res[u] = res[x]-count[u]+n-count[u];
            
            dfs(u,x,adj,n);
        }
    }
    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        res.resize(n);
        count.resize(n);
        
        for(int i=0;i<edges.size();i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
            
            
        }
        
        comp(0,-1,adj);
        
        dfs(0,-1,adj,n);
        
        return res;
    }
};

