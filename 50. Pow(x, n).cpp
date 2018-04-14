class Solution {
public:
    
    double power(double x, int n)
    {
        if(n==0)
            return 1;
        if(n==1)
            return x;
        if(n==2)
        {
            return x*x;
        }
        if(n%2==0)
            return power(x*x,n/2);
        else return x*power(x*x,n/2);
    }
    
    double myPow(double x, int n) {
        if(n<0)
            return 1/power(x, -1*n);
        else return power(x, n);
    }
};
