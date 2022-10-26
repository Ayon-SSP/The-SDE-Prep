/*
  ~ Mohit.Kota
  userhandle - mohit_010.
*/
vector<int> Solution::repeatedNumber(const vector<int> &A) 
{
   vector<int>vec;
   int  n=A.size();
   int act_xor=0;
   int arr_xor=0;
   for(int i=1;i<=n;i++)
   {
       act_xor^=i;
       arr_xor^=A[i-1];
   }
   int xor_1=act_xor^arr_xor;
   cout<<"xor :"<<xor_1<<endl;
   int set_bit = (xor_1) & ~(xor_1-1);
    cout<<"set bit"<<set_bit<<endl;
   int x=0,y=0;
   
   for(int i=0;i<n;i++)
   {
       //cout<<"check for buckets"<<(A[i] & set_bit)<<endl;
       if(A[i] & set_bit)
       {
           x=x^A[i];
       }
       else
       {
           y=y^A[i];
       }
   }
   for(int i=1;i<=n;i++)
   {
       if(i&set_bit)
       {
           x=x^i;
       }
       else
       {
           y=y^i;
       }
   }
   int x_count = 0;
    for (int i=0; i<n; i++) {
        if (A[i]==x)
            x_count++;
    }
    
    if (x_count==0)
        return {y, x};
    
    return {x, y};
}
