/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
        if(head==NULL)
        {
            return 0;
        }
        ListNode *temp=head;
        vector<int> ans;
        while(temp!=NULL)
        {
            ans.push_back(temp->val);
            temp=temp->next;
        }
        int max=INT_MIN;
        int n=ans.size();
        for(int i=0;i<n/2;i++)
        {
            int sum=ans[i]+ans[n-i-1];
            if(sum>max)
            {
                max=sum;
            }
        }
        return max;
    }
};