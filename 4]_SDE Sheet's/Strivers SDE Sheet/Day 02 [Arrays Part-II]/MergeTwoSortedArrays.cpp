//MergeTwoSortedArrays
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i, j, N, M, g;
    int *pi, *pj;
    cin>>N>>M;
    int A[N], B[M];
    for(i=0;i<N;i++)
    cin>>A[i];
    for(i=0;i<M;i++)
    cin>>B[i];
    g=ceil((N+M)/2.0);
    while(g!=0)
    {
        i=0;
        while((i+g)<(N+M))
        {
            j=i+g;
            if(i<N)
            pi=&A[i];
            else
            pi=&B[i-N];
            if(j<N)
            pj=&A[j];
            else
            pj=&B[j-N];
            if(*pi>*pj)
            swap(*pi, *pj);
            i++;
        }
        g/=2;
    }
    for(i=0;i<N;i++)
    cout<<A[i]<<" ";
    cout<<endl;
    for(i=0;i<M;i++)
    cout<<B[i]<<" ";
    cout<<endl;
    return 0;
}