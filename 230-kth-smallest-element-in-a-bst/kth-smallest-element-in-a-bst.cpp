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
    void inorder(TreeNode* root, int &k, int &result){
        if(root==nullptr) return ;
        if(root->left!=NULL) inorder(root->left, k, result);
        k--;
        if(k==0 ) {
            result=root->val;
            return;
        };
        if(root->right!=NULL) inorder(root->right, k, result);
        
    }
    int kthSmallest(TreeNode* root, int k) {
        int result;
         inorder(root, k, result);
         return result;
    }
};