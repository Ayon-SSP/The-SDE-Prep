// 882. Reachable Nodes In Subdivided Graph
// You are given an undirected graph (the "original graph") with n nodes labeled from 0 to n - 1. You decide to subdivide each edge in the graph into a chain of nodes, with the number of new nodes varying between each edge.

// The graph is given as a 2D array of edges where edges[i] = [ui, vi, cnti] indicates that there is an edge between nodes ui and vi in the original graph, and cnti is the total number of new nodes that you will subdivide the edge into. Note that cnti == 0 means you will not subdivide the edge.

// To subdivide the edge [ui, vi], replace it with (cnti + 1) new edges and cnti new nodes. The new nodes are x1, x2, ..., xcnti, and the new edges are [ui, x1], [x1, x2], [x2, x3], ..., [xcnti-1, xcnti], [xcnti, vi].

// In this new graph, you want to know how many nodes are reachable from the node 0, where a node is reachable if the distance is maxMoves or less.

// Given the original graph and maxMoves, return the number of nodes that are reachable from node 0 in the new graph.

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reachableNodes(vector<vector<int>>& edges, int m, int n) {
        vector<vector<pair<int,int>>> adj(n);
        
        for(int i=0;i<edges.size();i++) {
            int u = edges[i][0],v=edges[i][1],c=edges[i][2]+1;
            
            adj[u].push_back({v,c});
            adj[v].push_back({u,c});
        }
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        
        pq.push({0,0});
        vector<int> d(n,INT_MAX);
        d[0] = 0;
        
        while(!pq.empty()) {
            pair<int,int> p = pq.top();
            pq.pop();
            
            int dist=p.first,x=p.second;
            
            for(auto u:adj[x]) {
                int e = u.first,wt=u.second;
                
                if(d[e]>d[x]+wt) {
                    d[e] = d[x]+wt;
                    pq.push({d[e],e});
                }
            }
        }
        
        
        //
        int cnt = 0;
        
        for(int i=0;i<n;i++) {
            if(d[i]<=m)
            {
                cnt++;
                
            }
        }
        
        for(int i=0;i<edges.size();i++) {
            int c = edges[i][2];
            int a = edges[i][0],b=edges[i][1];
            int x=0;
            
            if(d[a]<=m) {
                x = min(c,m-d[a]);
                cnt+=x;
            }
            
            if(d[b]<=m) {
                cnt+=min(c-x,m-d[b]);
            }
        }
        
        return cnt;
    }
};

 