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
    // int length(ListNode *head){
    //     int ans = 0;
    //     while(head != nullptr){
    //         head = head->next;
    //         ans++;
    //     }
    //     return ans;
    // }
    // ListNode *sizeManage(ListNode *head, int count){
    //     while(count>0){
    //         head=head->next;
    //         count--;
    //     }
    //     return head;
    // }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        //Way: 
//         int la = length(headA), lb = length(headB);
//         if(la > lb) headA = sizeManage(headA, la-lb);
//         else if(la < lb) headB = sizeManage(headB, lb-la);
        
//         while(headA != headB){
//             headA = headA->next;
//             headB = headB->next;
//         }
//         return headA;
        
        // Way: Brute force TC: O(n^m), SC: O(1)
        ListNode *temp;
        while(headA!=NULL){
            temp=headB;
            while(temp!=NULL){
                if(headA==temp) return headA;
                temp=temp->next;
            }
            headA=headA->next;
        }
        return NULL;
        
        // Way: Hashmap TC: O(n+m), SC: O(m)
        // unordered_map<ListNode*,int> mp; 
        // while(headA!=NULL){
        //     m[headA]++; headA=headA->next;
        // }
        // while(headB!=NULL){
        //     if(m[headB]>0) return headB;
        //     headB=headB->next;
        // }
        // return NULL;
        
        // Way: Length Difference TC: O(m+n),SC: O(1)
//         int n=0,m=0; ListNode *ptr1=headA, *ptr2=headB;
//         while(ptr1!=NULL){ n++; ptr1=ptr1->next; }
//         while(ptr2!=NULL){ m++; ptr2=ptr2->next; }
//         int t=abs(n-m);
//         if(n>m){
//             while(t){headA=headA->next; t--;}
//         }
//         else { while(t){ headB=headB->next; t--; }}
        
//         while(headA!=NULL && headB!=NULL){
//             if(headA==headB) return headB;
//             headA=headA->next; headB=headB->next;
//         }
//         return NULL;
        
        // Way: Two Pointers TC: O(n+m), SC O(1)
        ListNode *ptr1=headA, *ptr2=headB;
        while(ptr1!=ptr2){
            if(!ptr1) ptr1=headB;
            else ptr1=ptr1->next;
            if(!ptr2) ptr2=headA;
            else ptr2=ptr2->next;
        }
        return ptr1;
    }
};