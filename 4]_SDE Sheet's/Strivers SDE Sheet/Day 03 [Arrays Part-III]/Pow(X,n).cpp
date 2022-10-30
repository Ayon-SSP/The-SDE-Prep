class Solution {
public:
    double powerfun(double a,long n)
    {
        double ans=1.00000;
        if(n==0)
        {
            return ans;
        }
        while(n>0)
        {
            if(n%2==1)
            {
                ans=ans*a;   
            }
            n/=2;
            a*=a;
        }
        return ans;
    }
    double myPow(double x, long n) 
    {
        if(n>0)
        {
             return powerfun(x,n);
        }
        else
        {
            return powerfun(1/x,abs(n));
        }
    }
};