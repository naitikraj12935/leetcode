class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      
    int maxLength = 0;
    int start = 0;
    unordered_map<char, int> mp;
    
    for (int end = 0; end < s.size(); end++) {
        if (mp.count(s[end]) && mp[s[end]] >= start) {
            start = mp[s[end]] + 1;
        }
        
        mp[s[end]] = end;
        
        maxLength = max(maxLength, end - start + 1);
    }
    
    return maxLength;


    }
};