//Time Complexity: O (N^2) ( Nested Loops )
//Space Complexity:  O(1)
#include<bits/stdc++.h>
using namespace std;
 int reversePairs(vector < int > & arr) {
      int Pairs = 0;
      for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
          if (arr[i] > 2 * arr[j]) Pairs++;
        }
      }
      return Pairs;
    }


int main()
{
    vector<int> arr{1,3,2,3,1};
    cout<<"The Total Reverse Pairs are "<<reversePairs(arr);
}