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
    int calc(TreeNode* root){
        int count=1;
        int mini=INT_MAX;
        if(count>=mini) return count;
        
        if(root==NULL) return 0;
        int lh=calc(root->left);
        int rh=calc(root->right);
        if(lh==0){
            return rh+1;
        }
        if(rh==0){
            return lh+1;
        }
        return min(lh, rh)+1;

    }
    int minDepth(TreeNode* root) {
        return calc(root);
    }
};