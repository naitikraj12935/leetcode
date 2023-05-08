class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        map<pair<int,int>,int> mp;
        int n=mat[0].size();
        for(int i=0;i<n;i++)
        {
            mp[{i,i}]=mat[i][i];
        }
        for(int i=0;i<n;i++)
        {
            mp[{i,n-1-i}]=mat[i][n-1-i];
        }
        int sum=0;
        for(auto it:mp)
        {
            sum+=it.second;
        }
        return sum;
        
    }
};