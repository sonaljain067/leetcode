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
        ListNode *prev=head, *curr=head, *forw=head;
        int count=1;
        while(curr!=NULL){
            if(count<k) 
                prev=prev->next;
            if(count>k) 
                forw=forw->next;
            curr=curr->next;
            count++;
        }
        
        int temp=prev->val;
        prev->val=forw->val;
        forw->val=temp;
        return head;
    }
};