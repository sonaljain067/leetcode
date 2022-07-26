/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    // Way1
     vector<TreeNode*> fun(TreeNode* root, TreeNode* p){
        if(root==nullptr){
            vector<TreeNode*> base; return base;
        }
        if(root==p){
            vector<TreeNode*> base;
            base.push_back(p);
            return base;
        }
        vector<TreeNode*> left=fun(root->left,p);
        vector<TreeNode*> right=fun(root->right,p);
         
         if(left.size()!=0) left.push_back(root); 
         if(right.size()!=0) right.push_back(root); 
         
         if(left.size()!=0) return left;
         else return right;
         
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // Way1
        vector<TreeNode*> path1=fun(root,p);
        vector<TreeNode*> path2=fun(root,q);
        int x=path1.size()-1, y=path2.size()-1;
        TreeNode *ans=nullptr;
        while(x>=0 && y>=0 && path1[x]->val==path2[y]->val){
             ans=path1[x];
            x--;y--;
        }
        return ans;
        
        
        // Way2
        // if(root==nullptr || root==p || root ==q) return root;
        // auto left=lowestCommonAncestor(root->left,p,q);
        // auto right=lowestCommonAncestor(root->right,p,q);
        // if(left!=nullptr) return left;
        // if(right!=nullptr) return right;
        // else return root;
    }
};