class Solution {
public:
int solve(int n,int x,int y,int z,int k)
{
    if(k==0)
    {
        return n;
    }
    n=x+y+z;
    x=y;
    y=z;
    z=n;
    return solve(n,x,y,z,k-1);

}
    int tribonacci(int n) {
        if(n==0)
        {
            return 0;
        }
        if(n==1 || n==2)
        {
            return 1;
        }
        int x=0;
        int y=1;
        int z=1;
        int k=n-2;
        int sum=0;
       int ans= solve(sum,x,y,z,k);
       return ans;
        
    }
};