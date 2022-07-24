/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    // Way1: Recursive
    // void postorderTraversal(TreeNode* root, vector<int>&ans){
    //     if(root==nullptr) return;
    //     postorderTraversal(root->left,ans);
    //     postorderTraversal(root->right,ans);
    //     ans.push_back(root->val);
    // }
    vector<int> postorderTraversal(TreeNode* root) {
        // Way1: Recursive
        // vector<int> v;
        // postorderTraversal(root,v);
        // return v;
        
        // Way2: Iterative
        vector<int> postOrder;
        if(root==NULL) return postOrder;
        stack<TreeNode *> st1, st2;  st1.push(root);
        
        while(!st1.empty()){
            TreeNode *node=st1.top(); st1.pop();
            st2.push(node);
            if(node->left!=NULL) st1.push(node->left);
            if(node->right!=NULL) st1.push(node->right);
        }
        
        while(!st2.empty()){
            postOrder.push_back(st2.top()->val);
            st2.pop();
        }
        return postOrder;
    }
};