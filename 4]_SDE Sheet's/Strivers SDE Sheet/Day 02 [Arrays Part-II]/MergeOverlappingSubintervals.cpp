//MergeOverlappingSubintervals
#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(pair<int, int>a, pair<int, int>b)
{
    return a.first<b.first;
}
int main()
{
    int i, N;
    pair<int, int>p;
    cin>>N;
    pair<int, int>A[N];
    for(i=0;i<N;i++)
    cin>>A[i].first>>A[i].second;
    sort(A, A+N, cmp);
    p=A[0];
    for(i=1;i<N;i++)
    {
        if(A[i].first<=p.second)
        p.second=max(p.second, A[i].second);
        else
        {
            cout<<p.first<<" "<<p.second<<endl;
            p=A[i];
        }
    }
    cout<<p.first<<" "<<p.second<<endl;
    return 0;
}