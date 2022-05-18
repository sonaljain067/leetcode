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
    ListNode* middleNode(ListNode* head) {
        //Way: Brute force TC: O(n)+O(n/2)~O(n), SC:O(1)
        ListNode *temp=head; int len=0;
        while(temp!=NULL){
            len++; temp=temp->next;
        }
        temp=head;
        for(int i=0;i<len/2;i++){
            temp=temp->next;
        }
        return temp;
        
        //Way: Tortoise & Hare Algo TC: O(n/2)~O(n), sc:O(1)
        // if(head==nullptr)
        //     return head;
        // ListNode *first=head, *second=head;
        // while(first!=nullptr && first->next!=nullptr){ // O(n/2)
        //     first=first->next->next;
        //     second=second->next;
        // }
        // // Here first is the pointer which is fast and moving with twice speed than the second pointer
        // return second;
    }
}; 