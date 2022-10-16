#include <bits/stdc++.h>
using namespace std;

class Graph{
    map<string,list<string>> mp;
public:
    void addEdge(string x,string y){
        
        mp[x].push_back(y);
    }

    void dfs_helper(string src,map<string,bool> &visited, list<string> &order){
        visited[src]=true;

        for(string nbrs:mp[src]){
            if(!visited[nbrs]){
                dfs_helper(nbrs,visited,order);
            }
        }
        order.push_front(src);
        return;
    }

    void topologySort(){
        list<string> order;
        map<string,bool> visited;
        for(auto x:mp){
            visited[x.first]=false;
        }

        for(auto x:mp){
            if(!visited[x.first]){
                dfs_helper(x.first,visited,order);
            }
        }
        cout<<"Sorted Topological Graph:\n";
        for(auto x:order){
            cout<<x<<"\n";
        }
    }
};

int main() {
    Graph g;

    g.addEdge("Python","DataPreprocessing");
    g.addEdge("Python","Pytorch");
    g.addEdge("Python","ML");
    g.addEdge("DataPreprocessing","ML");
    g.addEdge("Pytorch","DL");
    g.addEdge("ML","DL");
    g.addEdge("DL","FaceRecogn");
    g.addEdge("DataSet","FaceRecogn");

    g.topologySort();
}
