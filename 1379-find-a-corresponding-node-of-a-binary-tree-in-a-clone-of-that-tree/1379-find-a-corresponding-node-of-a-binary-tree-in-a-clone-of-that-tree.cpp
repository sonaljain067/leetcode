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
    // void dfs(TreeNode *og, TreeNode *cl, TreeNode *tar, TreeNode* &ans){
    //     if(!og) return;
    //     if(og==tar){ans = cl;}
    //     dfs(og->left,cl->left,tar,ans);
    //     dfs(og->right,cl->right,tar,ans);
    //     return;
    // }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        //DFS
        // TreeNode *ans=nullptr; 
        // dfs(original,cloned,target,ans);
        // return ans;
        
        //BFS
        queue<TreeNode*> q1,q2; TreeNode *t1=NULL, *t2=NULL, *ans=NULL;
        q1.push(original); q2.push(cloned);
        while(ans==NULL){
            t1=q1.front(); t2=q2.front(); q1.pop(); q2.pop();
            if(t1==target) {ans=t2;}
            if(t1->left){
                q1.push(t1->left); q2.push(t2->left);
            }
            if(t2->right){
                q1.push(t1->right); q2.push(t2->right);
            }
        }
        return ans;
    }
};