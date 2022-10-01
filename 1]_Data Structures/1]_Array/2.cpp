//Q2) Find the Maximum and Minimum element in the array/
//Solution:

#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
      cin>>arr[i];
   }

   int currmax=arr[0];
   int currmin=arr[0];
   for(int i=0;i<n;i++){
      // For Max Value
      if(arr[i]>currmax){
         currmax=arr[i];
      }
      // For Min Value
      if(arr[i]<currmin){
         currmin=arr[i];
      }
   }
   cout<<"Max:"<<currmax<<endl;
   cout<<"Min:"<<currmin<<endl;
   return 0;
}
