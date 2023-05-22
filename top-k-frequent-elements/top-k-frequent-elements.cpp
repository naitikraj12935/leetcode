class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
      unordered_map<int,int> mp;
       priority_queue<pair<int,int>> pq;
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
          mp[nums[i]]++;  
        }
     for(const auto & entry : mp)
        {
           pq.push({entry.second,entry.first});
        }
        while(k>0 && !pq.empty())
        {
          ans.push_back(pq.top().second);
          pq.pop();
          k--;
        }
        return ans;
        
    }
};