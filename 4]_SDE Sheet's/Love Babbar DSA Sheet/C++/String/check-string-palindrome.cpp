//Question:- Check wheather a string is palindrome or not

class Solution{
public:	
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    int st = 0, e = S.length()-1;
	    while(st<=e){
	        if(S[st] == S[e]){
	            st++;
	            e--;
	        }
	        else{
	            return 0;
	        }
	    }
	    return 1;
	}

};

// C++ program to count all duplicates
// from string using maps
#include <bits/stdc++.h>
using namespace std;
void printDups(string str)
{
    map<char, int> count;
    for (int i = 0; i < str.length(); i++) {
        count[str[i]]++;
    }
 
    for (auto it : count) {
        if (it.second > 1)
            cout << it.first << ", count = " << it.second
                 << "\n";
    }
}
/* Driver code*/
int main()
{
    string str = "test string";
    printDups(str);
    return 0;
}