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

// Way1: Recursive TC: O(n), SC: O(n)
// void inorder(TreeNode* root, vector<int>&vec){
//     if(!root)
//         return;
//     inorder(root->left,vec);
//     vec.push_back(root->val);
//     inorder(root->right,vec);
// }
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        // Way1: Recursive 
        // vector<int> vec;
        // inorder(root,vec);
        // return vec;
        
        //Way2: Iterative TC: O(n), SC: O(n)
        vector<int> inorder; TreeNode *temp=root; 
        if (root == NULL) return inorder;

        stack<TreeNode*> st; 
        while(true){
            if(temp!=NULL){
                st.push(temp); temp=temp->left;
            }
            else{
                if(st.empty()==true) break;
                temp=st.top(); st.pop();
                inorder.push_back(temp->val);
                temp=temp->right;
            }
        }
        return inorder;
    }
};