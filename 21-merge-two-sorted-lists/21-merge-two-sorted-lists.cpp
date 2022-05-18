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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        //Recursive TC: O()
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        if(l1->val<=l2->val){
            l1->next=mergeTwoLists(l1->next,l2); return l1;
        }
        else {
            l2->next=mergeTwoLists(l1,l2->next); return l2;
        }
        
        
        //Iterative TC: O()
//         ListNode* ans=new ListNode();
//         ListNode *p1=l1, *p2=l2, *temp=ans;
        
//         while(p1!=nullptr && p2!=nullptr){
//             if(p1->val < p2->val){
//                 temp->next=p1;
//                 temp=temp->next;
//                 p1=p1->next;
//             } 
//             else{
//                 temp->next=p2;
//                 temp=temp->next;
//                 p2=p2->next;
//             }
//         }
//         while(p1!=nullptr){
//             temp->next=p1;
//             temp=temp->next;
//             p1=p1->next;
//         }
//         while(p2!=nullptr){
//             temp->next=p2;
//             temp=temp->next;
//             p2=p2->next;
//         }
//         return ans->next;  
    }
};