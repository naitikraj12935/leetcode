class Solution {
public:
int search1(vector<vector<int>>& inter,int val)
{
    int left=0,right=inter.size()-1,ans=-1;
    while(left<=right)
    {
        int mid=(left+right)/2;
         if(inter[mid][0]>=val)
         {
             right=mid-1;
             ans=inter[mid][2];
         }
         else{
             left=mid+1;
         }
    }
    return ans;
}
    vector<int> findRightInterval(vector<vector<int>>& inter) {
        int n=inter.size();
        vector<int> ans(n);
        for(int i=0;i<n;i++)
        {
            inter[i].push_back(i);
        }
        sort(inter.begin(),inter.end());
        for(int i=0;i<n;i++)
        {
            int end=inter[i][1];
            int pos=inter[i][2];
            int found=search1(inter,end);
            ans[pos]=found;
        }
        return ans;
    }
};
