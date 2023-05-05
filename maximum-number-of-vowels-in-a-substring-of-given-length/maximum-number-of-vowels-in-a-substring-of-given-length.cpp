class Solution {
public:
    int maxVowels(string s, int k) {
        int n=s.size();
        int max=0;
        int sum=0;
        for(int i=0;i<k;i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='u'||s[i]=='i')
            {
              sum++;
            }
        }
        if(sum>max)
        {
            max=sum;
        }
        for(int i=k;i<n;i++)
        {
             if(s[i-k]=='a' || s[i-k]=='e' || s[i-k]=='o' || s[i-k]=='u'||s[i-k]=='i')
            {
              sum--;
            }
              if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='u'||s[i]=='i')
            {
              sum++;
            }
            if(sum>max)
            {
                max=sum;
            }
        }
        return max;
        
    }
};