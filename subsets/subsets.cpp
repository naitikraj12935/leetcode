class Solution {
public:
void solve(vector<int>& nums,vector<int>& ans,vector<vector<int>>& answer)
{
    if(nums.size()==0)
    {
        answer.push_back(ans);
        return ;
    }
    vector<int> ans1=ans;
     vector<int> ans2=ans;
     ans2.push_back(nums[0]);
     int num=nums[0];
     nums.erase(nums.begin()+0);
     solve(nums,ans1,answer);
     solve(nums,ans2,answer);
     nums.insert(nums.begin(),num);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ans;
        vector<vector<int>>answer;
        solve(nums,ans,answer);
        return answer;
    }
};