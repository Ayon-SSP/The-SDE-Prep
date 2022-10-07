//Problem Statement:
//Given the dimension of a sequence of matrices in an array arr[], where the dimension of the ith matrix is (arr[i-1] * arr[i]), the task is to find the most efficient way to multiply these matrices together such that the total number of element multiplications is minimum.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int dp[501][501];
    
    int solve(int i, int j,int arr[])
    {
        if(i>=j)return 0;
        
        if(dp[i][j]!=-1)
        return dp[i][j];

        int ans=INT_MAX;
        for(int k=i;k<=j-1;k++)
        {
            int tempAns = solve(i,k,arr) + solve(k+1,j,arr)
                          + arr[i-1]*arr[k]*arr[j];
            
            ans=min(ans,tempAns);
                          
        }
        return dp[i][j] = ans;
    }
    int matrixMultiplication(int N, int arr[])
    {
        memset(dp,-1,sizeof(dp));
        return solve(1,N-1,arr);
    }
//Time Complexity: O(N^3)
//Space Complexity: O(N^2)
