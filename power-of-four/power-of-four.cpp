class Solution {
public:
    bool isPowerOfFour(int n) {
            if(n%4!=0 && n>1 || n==0)
        {
            return false;
        }
        else if(n==1)
        {
            return true;
        }
        else
        {
            return isPowerOfFour(n/4);
        }
        
        
    }
};