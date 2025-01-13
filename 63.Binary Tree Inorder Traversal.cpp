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
        vector<int> res;
        if (!root) return res;

        vector<int> left = inorderTraversal(root->left);
        res.insert(res.end(), left.begin(), left.end());

        res.push_back(root->val);

        vector<int> right = inorderTraversal(root->right);
        res.insert(res.end(), right.begin(), right.end());

        return res;
    }
};
