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
    int status(TreeNode *root, int &n){
        if(root==NULL) return 1;
        int l=status(root->left,n);
        int r=status(root->right,n);
        
        // if l / r is not watched, installing camera there
        if(l==0 || r==0) {
            n++; return 2;
        }
        // if l / r has camera, then not installing camera
        if(l==2 || r==2) return 1;
        
        // both l & r executes, and watched
        return 0;
    }
    int minCameraCover(TreeNode* root) {
        int n=0; 
        if(status(root,n)==0) n++;
        return n;
    }
};