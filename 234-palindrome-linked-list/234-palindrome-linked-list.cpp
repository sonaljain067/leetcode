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
    // ListNode *reverse(ListNode *head){
    //     ListNode *previous=nullptr, *current=head, *forward=head;
    //     while(forward!=nullptr){
    //         forward=current->next;
    //         current->next=previous;
    //         previous=current; 
    //         current=forward;
    //     }  
    //     return previous;
    // }
    
    bool isPalindrome(ListNode* head) {
//         ListNode *fast=head, *slow=head;
//         while(fast!=nullptr && fast->next!=nullptr){
//             fast=fast->next->next;
//             slow=slow->next;
//         }
        
//         ListNode *rev=reverse(slow);
        
//         while(rev!=nullptr&&head!=nullptr){
//             if(rev->val!=head->val) return false;
//             rev=rev->next;
//             head=head->next;
//         }
//         return true;  
        
        //Way1: Brute Force TC: O(n), SC: O(n)
        // ListNode *temp=head; vector<int> vec;
        // while(temp!=NULL){
        //     vec.push_back(temp->val); temp=temp->next;
        // }
        // for(int i=0;i<vec.size()/2;i++){
        //     if(vec[i]!=vec[vec.size()-i-1]) return false; 
        // } 
        // return true;
        
        //Way2: Two Pointer TC: O(n), SC: O(1)
        // ListNode *slow=head, *fast=head, *prev=NULL, *temp;
        // while(fast && fast->next)
        //     fast=fast->next->next; 
        //     temp=slow->next, slow->next=prev; prev=slow,slow=temp;
        //     slow=(fast?slow->next:slow);
        //     while(slow)
        //         if(slow->val!=prev->val) return false;
        //         else slow=slow->next,prev=prev->next;
        // return true;
        
        //Way: Stack/Queue
        stack<int> st;  queue<int> q;
        ListNode *temp=head;
        while(temp) {st.push(temp->val); q.push(temp->val); temp=temp->next; }
        while(!st.empty() && !q.empty()){
            if(st.top()!=q.front()) return false;
            st.pop(); q.pop();
        }
        return true;
    }
    
    
};