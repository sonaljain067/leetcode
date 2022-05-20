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
    ListNode* reverseKGroup(ListNode* head, int k) {
        // Way: Recursion TC: O(), SC O(n)
        ListNode *cursor=head, *prev=NULL, *curr=head, *nxt=NULL;
        for(int i=0;i<k;i++) { if(!cursor) return head; cursor=cursor->next; }
        for(int i=0;i<k;i++){
            nxt=curr->next; curr->next=prev;
            prev=curr; curr=nxt;
        }
        head->next=reverseKGroup(curr,k);
        return prev;
        
        
        // Way: Recursion TC O(), SC O(n)
        // int count=0; ListNode *prev=NULL, *curr=head,*forw=NULL;
        // while(curr!=NULL && count<k){
        //     forw=curr->next; curr->next=prev;
        //     prev=curr; curr=forw;
        //     count++;
        // }
        // if(forw!=NULL) head->next=reverseKGroup(forw,k);
        // return prev;
        
        
        // Way: Two pointers/Iterative TC: O(), SC: O(1)
        // ListNode *dummy=new ListNode(0),*bef=dummy, *aft=head, *curr=NULL, *prev=NULL, *forw=NULL; 
        // dummy->next=head; 
        // while(true){
        //     ListNode *cursor=aft; 
        //     for(int i=0;i<k;i++){
        //         if(!cursor) return dummy->next; cursor=cursor->next;
        //     }
        //     curr=aft; prev=bef;
        //     for(int i=0;i<k;i++){
        //         forw=curr->next; curr->next=prev;
        //         prev=curr; curr=forw;
        //     }
        //     aft->next=curr; bef->next=prev;bef=aft; aft=curr;
        // }
    }
};



