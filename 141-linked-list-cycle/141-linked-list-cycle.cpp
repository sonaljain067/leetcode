/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        //Way1: Tortoise-Hare/Fast-slow/2 pointer TC: O(n),SC: O(1)
        // if(!head|| !head->next) return false;
        // ListNode* fast=head;ListNode *slow=head;
        // while(fast && fast->next){
        //     fast=fast->next->next;
        //     slow=slow->next;
        //     if(fast==slow) return true;
        // }
        // return false;
        
        
        //Way2: Hashmap TC: O(n),SC: O(n)
        // if(!head) return false;
        // unordered_map<ListNode*, int> mp;
        // while(head!=NULL){
        //     if(mp.count(head)>0) return true;
        //     else mp[head]=1;
        // }
        // return false;
        
        //Way: Floyd-cycle TC: O(n),SC: O(1)
        ListNode* fast=head;ListNode *slow=head;
        if(slow) fast=fast->next; else return false;
         while(fast || slow){
            if(fast==slow) return true;
             if(slow) slow=slow->next;
             if(fast){
                 if(fast->next) fast=fast->next->next;
                 else break;
             }
        }
        return false;
    }
};