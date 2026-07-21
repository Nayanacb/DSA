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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> inorder;
        if(root==NULL) return inorder;
        stack<TreeNode*> st;
        TreeNode* curr=root;
        while(!st.empty()|| curr!=NULL){
            
            
            if(curr==NULL){
            inorder.push_back(st.top()->val);
            TreeNode* tempr=st.top();
            st.pop();
            curr=tempr;
            curr=curr->right;
            }
            else{
                st.push(curr);
            curr=curr->left;
            }
            
        } 
        
        
        return inorder;
    }
};