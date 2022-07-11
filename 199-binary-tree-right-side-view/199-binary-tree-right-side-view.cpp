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
    void calRightView(TreeNode *root, vector<int>&ans, int level){
        if(!root) return;
        if(level==ans.size()) ans.push_back(root->val);
        calRightView(root->right,ans,level+1);
        calRightView(root->left,ans,level+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        calRightView(root,ans,0);
        return ans;
    }
};