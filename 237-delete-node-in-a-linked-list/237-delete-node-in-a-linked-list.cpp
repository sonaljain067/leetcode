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
    void deleteNode(ListNode* node) {
        // Brute force TC: O(n), SC: O(1)
        ListNode* current = node;
        while(current->next->next!=nullptr){
            current->val = current->next->val;
            current = current->next;
        }
        current->val = current->next->val;
        current->next = nullptr;
        
        // Way1 TC: O(4steps)~O(1), SC: O(1)
        // if(!node) return;
        // node->val=node->next->val; or swap(node->val,node->next->val);
        // ListNode *n = node->next;
        // node->next=node->next->next;
        // node->next->next=NULL;
        // delete n;
        
        // Way2 TC: O(2steps)~O(1), SC: O(1)
        // node->next=node->next->next;
        // node->val=node->next->val;
        
        // Way3 TC: O(1steps)~O(1), SC: O(1)
        // *node=*node->next;
    }
};