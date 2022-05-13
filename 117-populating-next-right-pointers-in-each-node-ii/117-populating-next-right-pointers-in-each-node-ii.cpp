/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        Node *head=NULL, *prev=NULL, *cur=root;
        
        //left child
        while(cur!=NULL){
            while(cur!=NULL){
                if(cur->left!=NULL){
                    if(prev!=NULL) { prev->next=cur->left; }
                    else { head=cur->left; }
                    prev=cur->left;
                } 
                
                //right child
                if(cur->right!=NULL){
                    if(prev!=NULL) { prev->next=cur->right; }
                    else { head=cur->right; }
                    prev=cur->right;
                }
            cur=cur->next;
            }
            cur=head; head=NULL; prev=NULL;
        }
        return root;
    }
};