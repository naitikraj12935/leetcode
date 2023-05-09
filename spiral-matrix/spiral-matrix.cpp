class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& m) {
        int left=0;
        int right=m[0].size()-1;
        int top=0;
        int down=m.size()-1;
        vector<int> ans;
        while(left<=right && top<=down)
        {   
            if(left<=right)
            {
            for(int i=left;i<=right;i++)
            {
                ans.push_back(m[top][i]);
            }
            top++;
            }
            else
            {
                break;
            }
            if(top<=down)
            {
            for(int i=top;i<=down;i++)
            {
                ans.push_back(m[i][right]);
            }
            right--;
            }
            else
            {
                break;
            }
            if(right>=left)
            {
            for(int i=right;i>=left;i--)
            {
                ans.push_back(m[down][i]);
            }
            down--;
            }
            else
            {
                break;
            }
            if(down>=top)
            {
            for(int i=down;i>=top;i--)
            {
                ans.push_back(m[i][left]);
            }
            left++;
            }
            else
            {
                break;
            }
        }
        return ans;
        
    }
};