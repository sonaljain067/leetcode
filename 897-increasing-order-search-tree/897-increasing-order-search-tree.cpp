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
    // Extract all nodes 
    // Arrange nodes such that they are: Left Root Right
    void inorderTraversal(TreeNode *root, list<int> &list1){
        if(root==NULL) return;
        
        inorderTraversal(root->left,list1);
        list1.push_back(root->val);
        inorderTraversal(root->right,list1);
    }
    TreeNode* increasingBST(TreeNode* root) {
        list<int> list1;
        inorderTraversal(root,list1);
        
        TreeNode *dummy=new TreeNode(0), *curr=dummy;
        for(int x: list1){
            curr->right=new TreeNode(x);
            curr=curr->right;
        }
        return dummy->right;
    }
};