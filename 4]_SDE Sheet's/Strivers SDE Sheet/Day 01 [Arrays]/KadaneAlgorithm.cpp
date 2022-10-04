//MaximumSubarraySum
//KadaneAlgorithm
#include<iostream>
using namespace std;
int main()
{
    int i, N, s, m;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    s=0;
    m=INT_MIN;
    for(i=0;i<N;i++)
    {
        s+=A[i];
        m=max(m, s);
        if(s<0)
        s=0;
    }
    cout<<m<<endl;
    return 0;
}