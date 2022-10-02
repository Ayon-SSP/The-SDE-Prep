//PascalTriangle
#include<iostream>
using namespace std;
int main()
{
    int i, j, N, c;
    cin>>N;
    for(i=1;i<=N;i++)
    {
        c=1;
        cout<<c<<" ";
        for(j=1;j<i;j++)
        {
            c*=(i-j);
            c/=j;
            cout<<c<<" ";
        }
        cout<<endl;
    }
    return 0;
}