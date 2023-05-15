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
    ListNode* swapNodes(ListNode* head, int k) {
        if(head==NULL)
        {
            return head;
        }
        ListNode *temp=head;
        int n=0;
        while(temp!=NULL)
        {
            n++;
            temp=temp->next;
        }
        temp=head;
        for(int i=1;i<k;i++)
        {
            temp=temp->next;
        }
        ListNode * temp1=head;
        for(int i=0;i<n-k;i++)
        {
            temp1=temp1->next;
        }
        int x=temp1->val;
        temp1->val=temp->val;
        temp->val=x;

        return head;
        
    }
};