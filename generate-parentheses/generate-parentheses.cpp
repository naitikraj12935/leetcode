class Solution {
public:
void solve(string op,int l,int r,vector<string> &ans)
{
    if(l==0 && r==0)
    {
        ans.push_back(op);
        return ;
    }
    if(l==r)
    {
        string op1=op;
        op1.push_back('(');
        solve(op1,l-1,r,ans);
    }
    else if(l==0 && r!=0)
    {
       string op1=op;
        op1.push_back(')');
        solve(op1,l,r-1,ans);
    }
    else
    {
       string op1=op;
       op1.push_back('(');
       string op2=op;
       op2.push_back(')');
       solve(op1,l-1,r,ans);
       solve(op2,l,r-1,ans);
    }
}
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        int l=n;
        int r=n;
        string op;
        solve(op,l,r,ans);
        return ans;
        
    }
};