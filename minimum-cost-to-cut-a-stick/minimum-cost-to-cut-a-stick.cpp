class Solution {
public:
    
    int dp[101][101];
    int helper(int first_stick,int last_stick, vector<int>&cuts , int left , int right){

        if(left>right) return 0;
        if(dp[left][right] != -1) return dp[left][right];
        int cost=1e9;
        for(int i=left;i<=right;i++){

            int left_cost = helper(first_stick , cuts[i],cuts,left,i-1);
            int right_cost = helper(cuts[i],last_stick,cuts,i+1,right);
            int curr_cost = (last_stick - first_stick) + left_cost + right_cost;
            cost = min(cost,curr_cost);
        }
        return dp[left][right] = cost;
    }
    int minCost(int n, vector<int>& cuts) {

        memset(dp , -1 , sizeof(dp));
        sort(cuts.begin(),cuts.end());
        return helper(0,n,cuts,0,cuts.size()-1);
        
    }
};