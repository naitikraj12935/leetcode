class Solution {
public:
    bool isPowerOfThree(int n) {
            if(n%3!=0 && n>1 || n==0)
        {
            return false;
        }
        else if(n==1)
        {
            return true;
        }
        else
        {
            return isPowerOfThree(n/3);
        }
        
        
    }
};