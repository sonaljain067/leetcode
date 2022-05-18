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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        //Way: Recursive TC: O(m), SC:O(m)
        ListNode*l=head; int count=0,p=0;
        while(l!=NULL){
            ++count; l=l->next;
        } p=count-n;
        
        if(head==NULL) return NULL;
        head->next=removeNthFromEnd(head->next,n);
        if(p==0) return head->next;
        return head;
        
        //Way: Two pointers  TC: O(m), SC: O(1)
        // ListNode *t1=head, *t2=head;
        // while(t1 && n--) t1=t1->next;
        // if(t1==NULL) return head->next;
        // while(t1->next){ t1=t1->next; t2=t2->next; }
        // t2->next=t2->next->next;
        // return head;
        
        
        //Way: Stack TC: O(m+n), SC: O(m)
        
        //Way: Two runs TC: O(m+(m-n)), SC: O(1)
        
//         if(head->next==NULL) return NULL;
//         ListNode*l=head; int count=0;
//         while(l!=NULL){
//             ++count; l=l->next;
//         }
//         int p=count-n;
        
//         if(count==n) return head->next;
//         ListNode *cur=head;
//         while(cur!=NULL){
//             if(p==1){
//                 ListNode* temp=cur->next;
//                 cur->next=cur->next->next;
//                 delete temp;
//                 break;
//             }
//             cur=cur->next; p--;
//         }
//         return head;
    }
};