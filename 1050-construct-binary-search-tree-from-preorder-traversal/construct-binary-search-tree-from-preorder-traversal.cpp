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
    TreeNode* helper(vector<int>& preorder, int prestart, int preend, vector<int>& inorder, int instart, int inend, map<int, int> &mp){
        if(prestart>preend|| instart>inend) return nullptr;
        TreeNode* root=new TreeNode(preorder[prestart]);
        int inroot=mp[root->val];
        int numsleft=inroot-instart;
        root->left=helper(preorder, prestart+1, prestart+numsleft, inorder, instart, instart+numsleft, mp);
        root->right=helper(preorder, prestart+numsleft+1, preend, inorder, instart+numsleft+1, inend, mp);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        vector<int> inorder= preorder;
        sort(inorder.begin(),inorder.end());
        int n=preorder.size();
        int m=inorder.size();
        map<int, int> mp;
        for(int i=0;i<m;i++){
            mp[inorder[i]]=i;
        }
        TreeNode* root=helper(preorder, 0, n-1, inorder, 0, m-1, mp);
        return root;

    }
};