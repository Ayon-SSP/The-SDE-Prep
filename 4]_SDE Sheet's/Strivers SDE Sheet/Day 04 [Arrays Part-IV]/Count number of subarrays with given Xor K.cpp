int Solution::solve(vector<int> &A, int B) 
{
    map<int,int>mp;
    int xr=0;
    int cnt=0;
    int n=A.size();
    for(int i=0;i<n;i++)
    {
        xr=xr^A[i];
        if(xr==B)
        {
            cnt++;
        }
        if(mp[xr^B]!=0)
        {
            cnt+=mp[xr^B];
        }
        mp[xr]+=1;
    }
    return cnt;
}
