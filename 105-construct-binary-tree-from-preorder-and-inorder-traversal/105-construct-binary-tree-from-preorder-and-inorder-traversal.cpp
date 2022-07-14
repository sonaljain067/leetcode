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
    TreeNode* solve(vector<int>&preorder, vector<int>&inorder, int ps, int pe, int is, int ie, unordered_map<int,int>& umap){
        if (pe<ps || ie<is) return NULL;
        TreeNode *root=new TreeNode(preorder[ps]);
        
        int inroot=umap[root->val], left=inroot-is;
        root->left=solve(preorder,inorder,ps+1,ps+left,is,inroot-1,umap);
        root->right=solve(preorder,inorder,ps+left+1,pe,inroot+1,ie,umap);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        // with map
        unordered_map<int,int> umap;
        int m=preorder.size(), n=inorder.size();
        for(int i=0;i<n;i++) umap[inorder[i]]=i;
        return solve(preorder,inorder,0,m-1,0,n-1,umap);
    }
};