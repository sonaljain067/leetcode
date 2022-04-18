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
    void inorderTraversal(TreeNode *root, int k, vector<int>& list1){
        if(root==NULL) return;
        
        inorderTraversal(root->left,k,list1);
        list1.push_back(root->val);
        inorderTraversal(root->right,k,list1); 
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> list1; priority_queue<int> pq;
        inorderTraversal(root,k,list1);
        
        for(int i=0;i<list1.size();i++){
            pq.push(list1[i]);
            if(pq.size()>k) pq.pop();
        }
        return pq.top();
    }
};