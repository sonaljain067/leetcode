/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        //Way1: Hashing TC: O(2n)~O(n), SC: O(n)
        // map<Node*, Node*> mp; int i=0; Node *ptr=head; 
        // while(ptr){                                     // O(n)
        //     mp[ptr]=new Node(ptr->val); ptr=ptr->next;
        // }
        // ptr=head; 
        // while(ptr){                                     // O(n)
        //     mp[ptr]->next=mp[ptr->next]; mp[ptr]->random=mp[ptr->random]; ptr=ptr->next;
        // }
        // return mp[head];
        
        
    
        // if(!head) return NULL; Node* temp=head;
        // while(temp){                                                //creation of deep copy nodes O(n)
        //     Node *node=new Node(temp->val);
        //     node->next=temp->next; temp->next=node; temp=node->next;
        // }
        // temp=head;
        // while(temp){                                                // establishing random pointer O(n)
        //     temp->next->random=(temp->random) ? temp->random->next : NULL; temp=temp->next->next;
        // }
        // Node *ans=head->next;  temp=head->next; 
        // while(head){                                                // extracting deep copy from original O(n)
        //     head->next=temp->next; head=head->next;
        //     if(!head) break; temp->next=head->next; temp=temp->next;
        // }
        // return ans;
        
        
        //Way2: Optimized TC: O(3n)~O(n), SC: O(1)
        Node *iter=head, *front=head; 
        
        //step1 creation of deep copy nodes O(n)
        while(iter){
            front=iter->next;
            Node *copy=new Node(iter->val);
            copy->next=iter->next; iter->next=copy; iter=front;
        }
        
        //step2 establishing random pointer O(n)
        iter=head;
        while(iter){
            if(iter->random) iter->next->random=iter->random->next;
            iter=iter->next->next;
        }
        
        //step3 extracting deep copy from original O(n)
        iter=head; Node* dummy=new Node(0), *deepcopy=dummy;
        while(iter){
            front=iter->next->next; deepcopy->next=iter->next;
            iter->next=front; deepcopy=deepcopy->next; iter=front;
        }
        return dummy->next;
    }
};