//Problem Statement
//Given a graph and a source vertex in the graph, find the shortest paths from the source to all vertices in the given graph.

/*Dijkstra's algorithm.  In essence, Dijkstra's algorithm maintains two sets: one set of nodes whose distance from source is NOT finalized, one set of nodes whose distance from source IS finalized.  In implementation, we keep track of the two sets explicitly or implicitly. */
#include <bits/stdc++.h>

using namespace std;

vector<vector<pair<int, int>>> buildGraph(int n, vector<vector<int>>& edges, vector<int>& weights) {
    vector<vector<pair<int, int>>> graph(n);
    for (int i = 0; i < edges.size(); i++) {
        vector<int> edge = edges[i];
        graph[edge[0]].push_back({edge[1], weights[i]});
        graph[edge[1]].push_back({edge[0], weights[i]});
    }
    return graph;
}

void printSolution(vector<int>& dist) {
    printf("Vertex \t\t Distance from Source\n");
    for (int i = 0; i < dist.size(); i++)
        printf("%d \t\t %d\n", i, dist[i]);
}

class Solution {
   public:
   //using Only vector
    void naiveMatrix(vector<vector<int>>& graph, int src) {
        int n = graph.size();
        vector<int> dist(n, INT_MAX);      // distance from source
        vector<bool> finalized(n, false);  // if the distance is finalized
        dist[src] = 0;

        for (int i = 0; i < n; i++) {
            // Get UN-finalized node with min distance
            int minDis = INT_MAX, minIndex;
            for (int node = 0; node < n; node++) {
                if (!finalized[node] && dist[node] < minDis) {
                    minDis = dist[node];
                    minIndex = node;
                }
            }

            // Distance to this node is finalized
            finalized[minIndex] = true;

            // Update it's neighbors, IF UN-finazlied
            for (int node = 0; node < n; node++) {
                if (!finalized[node] && graph[minIndex][node] &&
                    dist[minIndex] + graph[minIndex][node] < dist[node]) {
                    dist[node] = dist[minIndex] + graph[minIndex][node];
                }
            }
        }
        printSolution(dist);
    }
    //using set

    void setList(vector<vector<pair<int, int>>>& graph, int src) {
        // graph: each pair<int, int> is <node, weight>
        int n = graph.size();
        vector<int> dist(n, INT_MAX);
        dist[src] = 0;
        set<pair<int, int>> unfinalized;  // <distance, node>
        for (int node = 0; node < n; node++)
            unfinalized.insert({node == src ? 0 : INT_MAX, node});

        while (!unfinalized.empty()) {
            pair<int, int> p = *(unfinalized.begin());
            unfinalized.erase(unfinalized.begin());
            int u = p.second;

            for (int i = 0; i < graph[u].size(); i++) {
                int v = graph[u][i].first, weight = graph[u][i].second;
                if (dist[u] + weight < dist[v]) {
                    // v cannot be finalized, so must be in finalized
                    unfinalized.erase(unfinalized.find({dist[v], v}));
                    dist[v] = dist[u] + weight;
                    unfinalized.insert({dist[v], v});
                }
            }
        }

        printSolution(dist);
    }
    //using priorityqueuelist
    void priorityQueueList(vector<vector<pair<int, int>>>& graph, int src) {
        auto comp = [](const pair<int, int>& p1, const pair<int, int>& p2) {
            return p1.first > p2.first; // <distance, node>
        };
        priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(comp)> unfinalized(comp);
        int n = graph.size();
        vector<int> dist(n, INT_MAX);
        dist[src] = 0;
        unfinalized.push({0, src});

        while (!unfinalized.empty()) {
            int u = unfinalized.top().second;
            unfinalized.pop();

            for (int i = 0; i < graph[u].size(); i++) {
                int v = graph[u][i].first, weight = graph[u][i].second;
                if (dist[u] + weight < dist[v]) {
                    dist[v] = dist[u] + weight;
                    unfinalized.push({dist[v], v});
                }
            }
        }

        printSolution(dist);
    }
};

int main() {
    Solution sol;
    int n = 9;
    vector<vector<int>> matrix({{0, 4, 0, 0, 0, 0, 0, 8, 0},
                                {4, 0, 8, 0, 0, 0, 0, 11, 0},
                                {0, 8, 0, 7, 0, 4, 0, 0, 2},
                                {0, 0, 7, 0, 9, 14, 0, 0, 0},
                                {0, 0, 0, 9, 0, 10, 0, 0, 0},
                                {0, 0, 4, 14, 10, 0, 2, 0, 0},
                                {0, 0, 0, 0, 0, 2, 0, 1, 6},
                                {8, 11, 0, 0, 0, 0, 1, 0, 7},
                                {0, 0, 2, 0, 0, 0, 6, 7, 0}});
    vector<vector<int>> edges({{0, 1},
                               {0, 7},
                               {1, 2},
                               {1, 7},
                               {2, 3},
                               {2, 8},
                               {2, 5},
                               {3, 4},
                               {3, 5},
                               {4, 5},
                               {5, 6},
                               {6, 7},
                               {6, 8},
                               {7, 8}});
    vector<int> weights({4, 8, 8, 11, 7, 2, 4, 9, 14, 10, 2, 1, 6, 7});
    vector<vector<pair<int, int>>> graph = buildGraph(n, edges, weights);

    // adjacency matrix, naive implementation
    sol.naiveMatrix(matrix, 0);

    // adjacency list, with C++ set
    sol.setList(graph, 0);

    // adjacency list, with C++ priority_queue
    sol.priorityQueueList(graph, 0);
}
