// Problem 
// Given an undirected graph and a number m
//  determine if the graph can be colored with at most m colors such that no two adjacent vertices of the graph are colored with the same color
 

class Solution {
    bool apply(vector<vector<int>>& adj, vector<int>& colors, int u, int n, int par) {
        for (int c = 1; c <= 4; c++) {
            if (c != par) {
                colors[u] = c;
                bool safe = true;
                for (int v : adj[u]) {
                    if (colors[v] == c) {
                        safe = false;
                        break;
                    }
                    if (colors[v] == -1 && !apply(adj, colors, v, n, c)) {
                        safe = false;
                        break;
                    }
                }
                if (safe)
                    break;
                colors[u] = -1;
            }
        }
        return colors[u] != -1;
    }
    
public:
    vector<int> gardenNoAdj(int N, vector<vector<int>>& paths) {
        vector<vector<int>> adj(N);
        for (auto e : paths) {
            adj[e[0]-1].push_back(e[1]-1);
            adj[e[1]-1].push_back(e[0]-1);
        }
        
        vector<int> colors(N, -1);
        for (int i = 0; i < N; i++) {
            if (colors[i] == -1)
                apply(adj, colors, i, N, -1);
        }
        return colors;
    }
};
