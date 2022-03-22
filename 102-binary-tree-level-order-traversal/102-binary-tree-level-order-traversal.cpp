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
    // This ques can be solved both by DFS and BFS technique
    // Through DFS, it can be solved by assigning value to each level and on each traversal pushing the value to respective vector
    // Here the problem is solved by BFS using queue such that elements are added into queue level wise and each level elements gets pushed to different inner vector of outer vector 
    // TC: O(N), SC: O(N)
    vector<vector<int>> levelOrder(TreeNode* root) {
        //Way1: using BFS and keeping track of count
//         vector<vector<int>> ans;
//         if(root==nullptr) return ans;
        
//         queue<TreeNode*> que; que.push(root);
//         int d=1; // no of ele in queue
        
//         while(que.size()!=0){
//             int count=0; 
//             // count is to keep count of no of left and right ele in node and then updating it to outer d to traverse for count no of times
//             ans.push_back(vector<int>());
//             for(int i=0;i<d;i++){
//                 TreeNode *rem=que.front();
//                 que.pop();
//                 ans[ans.size()-1].push_back(rem->val);
                
//                 if(rem->left!=nullptr){
//                     que.push(rem->left); count++;
//                 }
//                 if(rem->right!=nullptr){
//                     que.push(rem->right); count++;
//                 }
//             }
//             d=count;
//         }
//         return ans;
        
        //Way2: Using BFS only
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        queue<TreeNode*> q; q.push(root);
        while(!q.empty()){
             int size=q.size();
             vector<int> level;
             for(int i=0;i<size;i++){
                 TreeNode *node=q.front(); q.pop();
                 if(node->left!=NULL) q.push(node->left);
                 if(node->right!=NULL) q.push(node->right);
                 level.push_back(node->val);
             }
             ans.push_back(level);
         }
         return ans;
        
        
        
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};