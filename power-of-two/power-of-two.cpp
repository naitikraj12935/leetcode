class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n%2!=0 && n>1 || n==0)
        {
            return false;
        }
        else if(n==1)
        {
            return true;
        }
        else
        {
            return isPowerOfTwo(n/2);
        }
        
    }
};