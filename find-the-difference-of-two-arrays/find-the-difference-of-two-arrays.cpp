class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans;
         vector<int> answer1;
          vector<int> answer2;
        for(int i=0;i<nums1.size();i++)
        {
            int n=0;
            for(int k=0;k<i;k++)
            {
                if(nums1[i]==nums1[k])
                n++;
            }
            if(n==0)
            {
           int x=0;
            for(int j=0;j<nums2.size();j++)
            {
                if(nums2[j]==nums1[i])
                {
                    x++;
                    break;
                }
            }
            if(x==0)
            {
                answer1.push_back(nums1[i]);
            }
            }
        }
        for(int i=0;i<nums2.size();i++)
        {
            int n=0;
            for(int k=0;k<i;k++)
            {
                if(nums2[i]==nums2[k])
                n++;
            }
            if(n==0)
            {
           int x=0;
            for(int j=0;j<nums1.size();j++)
            {
                if(nums1[j]==nums2[i])
                {
                    x++;
                    break;
                }
            }
            if(x==0)
            {
                answer2.push_back(nums2[i]);
            }
            }
        }
        ans.push_back(answer1);
        ans.push_back(answer2);
        return ans;
        
    }
};