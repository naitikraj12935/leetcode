class Solution {
public:
    bool judgeSquareSum(int c) {
        int n=sqrt(c);
        int i=0;
       int j=n;
        while(i<=j)
        {
            long long int sum=c;
            sum=sum-i*i;
            sum=sum-j*j;
            if(sum==0)
            return true;
            else if(sum<0)
            j--;
            else
            i++;
        }
        return false;
    }
};