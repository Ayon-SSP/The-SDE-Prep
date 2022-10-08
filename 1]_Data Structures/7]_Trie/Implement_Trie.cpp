#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    Node* link[26];
    int equal = 0;
    int prefix = 0;
    bool isContains(char ch){
        return link[ch-97] != NULL;
    }
};
class Trie {
public:
    Node* root;
    Trie() {
        root = new Node();
    }
    
    void insert(string word) {
        Node* node = root;
        for(auto i:word){
            node->prefix++;
            if(node->isContains(i)){
                node = node->link[i-97];
                continue;
            }
            node->link[i-97] = new Node();
            node = node->link[i-97];
        }
        node->equal++;  
    }
    
    bool search(string word) {
        Node* node = root;
        for(auto i:word){
            if(!node->isContains(i))
                return false;
            node = node->link[i-97];
        }
        return node->equal;
    }
    
    bool startsWith(string prefix) {
        Node* node = root;
        for(auto i:prefix){
            if(!node->isContains(i))
                return false;
            node = node->link[i-97];
        }
        return true;        
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
