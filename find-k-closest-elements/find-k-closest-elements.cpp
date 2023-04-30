class Solution {
public:
 vector<int> findClosestElements(vector<int>& arr, int k, int x) {
    vector<int> ans;
    vector<pair<int,int>> inte;

    for(auto ele:arr)
    {
        inte.push_back(make_pair(abs(x-ele),ele)); // fixed syntax error here
    }
    sort(inte.begin(),inte.end());
    for(int i=0;i<k;i++)
    {
        ans.push_back(inte[i].second);
    }
    sort(ans.begin(), ans.end()); // added this line to sort ans in ascending order
    return ans;
}


};