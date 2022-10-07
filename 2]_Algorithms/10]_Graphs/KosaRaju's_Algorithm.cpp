#include<bits/stdc++.h>

using namespace std;

void base(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
}

vector<vector<int>> ans;

void dfs(int vertex, vector<vector<int>>& graph, vector<bool>& vis, stack<int>& st){
    vis[vertex] = true;

    for(auto x : graph[vertex]){
        if(!vis[x]){
            dfs(x, graph, vis, st);
        }
    }
    st.push(vertex);
}

void new_dfs(int vertex, vector<bool>& vis, vector<vector<int>>& trans, vector<int>& v){
    v.push_back(vertex);

    vis[vertex] = 1;

    for(auto x : trans[vertex]){
        if(!vis[x]){
            new_dfs(x, vis, trans, v);
        }
    }
}

int main(){

base();

// n = number of total nodes(nodes start with 0 t0 n) and e = number of total edges

int n,e;
cin >> n >> e; 

// Create adjanacy list 

vector<vector<int>> graph(n);

// taking inputs

for(int i = 0; i < e; i++) {
    int node1,node2;
    cin >> node1 >> node2;

    // IN kosaRaju's Algorithm, we find strongly connected components in directed Graph
    graph[node1].push_back(node2);
}

// first, Sort all the nodes in order (topological sort)

stack<int> st;

vector<bool> vis(n,false);

for(int i=0;i<n;i++){
    if(!vis[i]){
        dfs(i, graph, vis, st);
    }
}

// clear vis array

for(int i = 0; i < n; i++) vis[i] = false;

// Now, transpose the adjanacy list

vector<vector<int>> trans(n);

for(int i = 0; i < n; i++){
    for(auto x : graph[i]){
        trans[x].push_back(i);
    }
}

// Now, iterating stack st

while(!st.empty()){
    int vertex = st.top();
    st.pop();

    if(!vis[vertex]){
        vector<int> v;
        new_dfs(vertex, vis, trans, v);
        ans.push_back(v);
    }
}

// Answer

cout << "Total Strongly Connected Components =" << " " <<  ans.size() << endl;

for(int i=0;i<ans.size();i++){
    cout << i+1 << ". ";
    for(int j=0;j<ans[i].size();j++){
        cout << ans[i][j] << " ";
    }
    cout << endl; 
}

return 0;
}
