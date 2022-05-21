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
    //For way1
    // int countEle(ListNode *temp){
    //     int count=0;
    //     while(temp!=NULL){
    //         temp=temp->next;
    //         count++;
    //     }
    //     return count;
    // }
    // ListNode *findLastEle(ListNode *temp, int count){
    //     while(count>1){
    //         temp=temp->next;
    //         count--;
    //     }
    //     return temp;
    // }
    
    //For way2
    void reverse(vector<int> &nums, int left, int right){
        while(left<right){
            int temp=nums[left]; nums[left]=nums[right]; nums[right]=temp; left++; right--;
        }
    }
    
    ListNode* rotateRight(ListNode* head, int k) {
        // Way1: Brute Force TC: O(), SC: o()
        // if(!head) return nullptr;
        // if(countEle(head)==1) return head;
        // for(int i=0;i<k%countEle(head);i++){
        //     ListNode *last=findLastEle(head, countEle(head)-1);
        //     ListNode *start=new ListNode(last->next->val);
        //     start->next=head;
        //     head=start;
        //     last->next=NULL;
        // }
        // return head;
        
        //Way2: Vector TC: O(n), SC: O(n)
        if(!head || !head->next || k<=0) return head; 
        vector<int> nums;  ListNode *temp=head; 
        while(temp){nums.push_back(temp->val); temp=temp->next; }
        k=k%nums.size();
        reverse(nums,0,nums.size()-1); reverse(nums,0,k-1); reverse(nums,k,nums.size()-1);
        temp=head; int i=0;
        while(temp){
            temp->val=nums[i++]; temp=temp->next; //updating val of rotate vec to ll
        }
        return head;
        
        
        //Way3: Fast-slow/Two pointer TC: O(n), SC: O(1)
        // if(!head) return head;
        // ListNode *temp=head, *slow=head, *fast=head; int len=0;
        // while(temp){ len++; temp=temp->next; }
        // k=k%len; //for optimization
        // while(k--) fast=fast->next;
        // while(fast->next)slow=slow->next, fast=fast->next; 
        // fast->next=head; head=slow->next; slow->next=NULL;
        // return head;
        
        //Way4: Single pointer TC: O(n-(n%k))~O(n), SC: O(1)
        // if(!head || !head->next || k==0) return head;
        // ListNode *temp=head; int len=1;
        // while(temp->next) { len++; temp=temp->next; }
        // temp->next=head; //last pointer pointing to head to make circular
        // k=len-(k%len); 
        // while(k--) temp=temp->next; //moving to pos where it's last node
        // head=temp->next; temp->next=NULL;
        // return head;
    }
};


