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
    
    int findMaxSum(TreeNode *root,int &res){
        if(root==nullptr) 
            return 0;
        
        int l=findMaxSum(root->left,res);
        int r=findMaxSum(root->right,res);
        
        int temp=0, ans=0;
        temp=max(max(l,r)+root->val,root->val);
        ans=max(temp,l+r+root->val);
        res=max(res,ans);
        return temp;
    }
    int maxPathSum(TreeNode* root) {
        int res=INT_MIN;
        findMaxSum(root,res);
        return res;
    }
};