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
    
    //Way: Recursive
    int maxDepth(TreeNode* root){
        if(!root) return 0;
        return max(maxDepth(root->left),maxDepth(root->right))+1;
    }

//     int findRecursiveSum(TreeNode *root,int &maxHeight, int depth){
//         if(!root) return 0;
//         if(depth==maxHeight) return root->val;
//         return findRecursiveSum(root->left,maxHeight,depth+1)+findRecursiveSum(root->right,maxHeight,depth+1);
        
//     }
    
    //Way: DFS
    // int DFS(TreeNode *root, int depth){
    //     int maxHeight=1, sum=0;
    //     if(!root) return 0;
    //     if(!root->left && !root->right){
    //         if(depth==maxHeight) sum+=root->val;
    //         else if(depth>maxHeight) { sum=root->val; maxHeight=depth;}
    //     }
    //     DFS(root->left, depth+1); DFS(root->right,depth+1);
    //     return sum;
    // }
   
    int deepestLeavesSum(TreeNode* root) {
        int sum=0, maxHeight=maxDepth(root),depth=1;
        
        //Way: Recursive
        // return findRecursiveSum(root,maxHeight,depth);
        
        //Way: DFS TC: O(n) SC: O(n)
        // return DFS(root,depth); 
        
        //Way: BFS/Level order TC: O(n) SC: O(n)
        queue<TreeNode*> q; q.push(root);
        while(!q.empty()){
            sum=0; int n=size(q);
            for(int i=0;i<n;i++){
                auto top=q.front(); q.pop();
                sum+=top->val;
                if(top->left) q.push(top->left);
                if(top->right) q.push(top->right);
            }
        }
        return sum;
    }
};