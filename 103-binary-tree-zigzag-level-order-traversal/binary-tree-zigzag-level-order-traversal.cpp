/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzag(TreeNode* root, vector<vector<int>> ans) {

        if (root == NULL)
            return ans;
        bool flag = true;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            int size = q.size();
            vector<int> temp(size);
            for (int i = 0; i < size; i++) {
                TreeNode* curr = q.front();
                q.pop();

                int index = flag ? i : size - i - 1;
                temp[index] = curr->val;
                if (curr->left) {
                    q.push(curr->left);
                }
                if (curr->right) {
                    q.push(curr->right);
                }
            }
            ans.push_back(temp);
            flag = !flag;
        }
        return ans;
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        return zigzag(root, ans);
        
    }
};