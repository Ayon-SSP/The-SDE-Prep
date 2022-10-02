// Q3) Find the Kth Max and Min element of an array
// Solution:

#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int arr[n];
   int len = sizeof(arr) / sizeof(arr[0]);
   for(int i=0;i<n;i++){
      cin>>arr[i];
   }
  int k;
  cin>>k;

// Used for finding the Kth Max element of the array.
// Uses Min-Heap
  priority_queue<int ,vector<int>, greater<int> > pq;// Min-Heap
  for(int i=0;i<k;i++){
      pq.push(arr[i]);
  }
  for(int i=k;i<len;i++){
      // If the top of the element is less than the upcoming element pop it and push the element from the array.
        if(pq.top()<arr[i]){
            pq.pop();
            pq.push(arr[i]);
        }
    }

// Used for finding the kth Min element of the array.
// Used Maxd-Heap
    priority_queue<int ,vector<int>, less<int> > pq1;// Max-Heap
   for(int i=0;i<k;i++){
      pq1.push(arr[i]);
   }
   for(int i=k;i<len;i++){
       // If the top of the element is less than the upcoming element pop it and push the element from the array.
        if(pq1.top()>arr[i]){
            pq1.pop();
            pq1.push(arr[i]);
        }
    }

    // while(!pq.empty()){
    //     cout<<pq.top();
    //     pq.pop();
    // }

    cout<<k<<"th max element is :"<<pq.top()<<endl;
    cout<<k<<"th min element is :"<<pq1.top();

   return 0;
}
