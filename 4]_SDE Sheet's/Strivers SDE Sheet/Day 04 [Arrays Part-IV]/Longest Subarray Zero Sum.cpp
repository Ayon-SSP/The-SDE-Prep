#include<bits/stdc++.h>
int LongestSubsetWithZeroSum(vector < int > arr) {
  // Write your code here
    map<int,int>mp;
    int n=arr.size();
    int sum=0;
    int maxlen=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum==0)
        {
            maxlen=i+1;
        }
        else
        {
            if(mp.find(sum)!=mp.end())
            {
                maxlen=max(maxlen,i-mp[sum]);
            }
            else
            {
                mp[sum]=i;
            }
        }
    }
    return maxlen;

}