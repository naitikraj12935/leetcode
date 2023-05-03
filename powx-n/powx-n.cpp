class Solution {
public:
    double myPow(double x, int n) {
        if(x==1)
        {
            return 1;
        }
        if(n==0)
        {
            return 1;
        }
        if(n<0)
        {
            if(abs(n)%2==0)
            {
                return myPow((1/x)*(1/x),abs(n)/2);
            }
            else
            {
            return myPow(1/x,abs(n));
            }
        }
        if(n%2==0)
        {
            return myPow(x*x,n/2);
        }

        return x*myPow(x,n-1);
    }
};