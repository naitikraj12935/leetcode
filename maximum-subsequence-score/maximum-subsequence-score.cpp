class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
          long long ans=INT_MIN;
          int n= nums1.size();
          priority_queue<int,vector<int>, greater<int>> pq;
          vector<pair<int,int> >v;
          for(int i=0;i<n;i++){
              v.push_back({nums2[i],nums1[i]});

          }
          long long sum=0;
          sort(rbegin(v),rend(v));
          for(int i=0;i<n;i++){
               long long  a= v[i].first;
               long long b= v[i].second;
                      
               if(pq.size()==k){
                   sum-=pq.top();
                   pq.pop();
               }
               sum+=b;
               pq.push(b);
               if(pq.size()==k){
                   ans=max(ans, sum*a);
               }
          }

          return ans;
    }
};