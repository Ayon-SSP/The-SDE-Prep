#include <bits/stdc++.h>
using namespace std;

int maximumSubarraySum(vector<int> arr, int size)
{
  int maxSum = INT_MIN;

  for (int i = 0; i <= size - 1; i++)
  {
    int currSum = 0;
    for (int j = i; j <= size - 1; j++)
    {
      currSum += arr[j];
      if (currSum > maxSum)
      {
        maxSum = currSum;
      }
    }
  }

  return maxSum;
}
int main()
{
  int size;
  cout<<"Enter the size of the vector"<<endl;
  cin>>size;
  vector<int> v(size);
  cout<<"Enter the elements in the vector"<<endl;
  for(int i=0;i<size;i++)
  {
    cin>>v[i];
  }
  cout << maximumSubarraySum(v, size) << endl;
  return 0;
}