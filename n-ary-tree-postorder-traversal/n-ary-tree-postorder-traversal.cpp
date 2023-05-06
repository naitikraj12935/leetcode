/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
 void order(Node* root,vector<int> &ans)
   {
       if(root==NULL)
       {
           return ;
       }
      
       for(Node* child:root->children)
       {
           order(child,ans);
            ans.push_back(child->val);
       }
   }
    vector<int> postorder(Node* root) {
        vector<int> ans;
        order(root,ans);
        if(root!=NULL)
        ans.push_back(root->val);
        return ans;
    }
};