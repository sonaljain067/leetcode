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
    ListNode *detectCycle(ListNode *head) {
        // Way1: Tortoise-Hare method/Floyd Cycle method TC: O(n), SC: O(1)
        if(!head || !head->next) return nullptr;
        
        ListNode *fast=head, *slow=head; int cycle=0;
        while(fast && fast->next){
            fast=fast->next->next; slow=slow->next;
            if(slow==fast) { cycle=1; break; }
        }
        if(cycle==0) return NULL;
    
        while(head!=slow){
            head=head->next; slow=slow->next;
        }
        return head;
        
        //Way2: Hashmap TC: O(n), SC: O(n)
        // unordered_map<ListNode*, int> umap; 
        // while(head){
        //     umap[head]=true;
        //     if(umap[head]) return head; 
        //     head=head->next;
        // }
        // return NULL;
        
        //Way3: Hashset TC: O(n), SC: O(n)
        // unordered_set<ListNode*> st; 
        // while(head){            
        //     if(st.find(head)!=end(st)) return head; 
        //     st.insert(head);
        //     head=head->next;
        // }
        // return NULL;

        
        
    }
};