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
    // void addFirst(ListNode **head, ListNode **tail, int data){
    //     ListNode* temp=new ListNode(data);
    //     if(!*head){
    //         *head=temp; *tail=temp;
    //     }
    //     else{ temp->next=*head; *head=temp; }
    // }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // Way: Recursive TC: O(n+m), SC: O()
        if(!l1 && !l2) return NULL;
        int c=(l1 ? l1->val : 0)+(l2 ? l2->val : 0);
        ListNode *newHead=new ListNode(c%10), *next=l1 ? l1->next: NULL;
        c/=10; 
        if(next) next->val+=c; 
        else if(c) next=new ListNode(c);
        newHead->next=addTwoNumbers(l2 ? l2->next : NULL, next);
        return newHead;
        
        // Way: Iterative TC: O(max(n,m)), SC O(max(n,m)) //n -> len of l1, m=->len of l2
        // ListNode *res = new ListNode(); ListNode *ans=res; int carry=0;
        // while(l1!=NULL || l2!=NULL || carry){
        //     int sum = (l1 ? l1->val : 0)+ (l2 ? l2->val : 0) + carry;
        //     carry=sum/10; sum%=10;
        //     ListNode *n=new ListNode(sum);
        //     res->next=n; res=res->next;
        //     l1=l1 ? l1->next : l1; l2=l2 ? l2->next : l2;
        // }
        // return ans->next;
        
        //Way: Stack TC: O(n+m), SC O(n+m)
//         ListNode *temp1=l1, *temp2=l2; int carry=0; stack<int> st;
//         while(temp1!=NULL && temp2!=NULL){
//             int num1=temp1->val; int num2=temp2->val;
//             int sum=(num1+num2+carry)%10; carry=(num1+num2+carry)/10;
//             st.push(sum); temp1=temp1->next; temp2=temp2->next;
//         }
//         while(temp1){
//             int sum=(temp1->val+carry)%10; carry=(temp1->val+carry)/10;
//             st.push(sum); temp1=temp1->next;
//         }
//         while(temp2){
//             int sum=(temp2->val+carry)%10; carry=(temp2->val+carry)/10;
//             st.push(sum); temp2=temp2->next;
//         }
//         if(carry!=0) st.push(carry);
        
//         ListNode *head=NULL, *tail=NULL; 
//         while(st.size()>0){
//             addFirst(&head,&tail,st.top()); st.pop();
//         }
//         return head;
    }
};