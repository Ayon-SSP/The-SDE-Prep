#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        Node* characters[26];
        bool wordEnds = false;
        bool hasLetter(char letter){
            return characters[letter-97]!=NULL;
        }
};

class Trie{
    public:
        Node* root;
        Trie(){
            root = new Node();
        }
        void insert(string &word){
            Node* wordBuilder = root;
            for(auto &letter: word){
                if(!wordBuilder->hasLetter(letter)){
                    wordBuilder->characters[letter-97] = new Node();
                }
                wordBuilder = wordBuilder->characters[letter-97];
            }
            wordBuilder->wordEnds = true;
        }


        int search(string &word, int from, int noOfWord){
            Node* wordSearcher = root;
            for(int i=from;i<word.size();i++){
                char& letter = word[i];
                if(wordSearcher->hasLetter(letter)){
                    if(wordSearcher->characters[letter-97]->wordEnds){
                        int val = search(word,i+1,noOfWord+1);
                        if(i==word.size()-1)
                            return noOfWord;
                        if(val)
                            return val;
                    }
                    wordSearcher = wordSearcher->characters[letter-97];
                }
                else{
                    return 0;
                }
            }
            return 0;
        }
};

class Solution {
public:
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        Trie* trie = new Trie();
        vector<string> answer;
        for(auto word:words){
            trie->insert(word);
        }
        for(auto word:words){
            int val = trie->search(word,0,0);
            if(val)
                answer.push_back(word);
        }
        return answer;
    }
};