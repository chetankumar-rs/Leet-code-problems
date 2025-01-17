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
    bool isSymmetric(TreeNode* root) {
        if (!root) return true;   
        return isMirror(root->left, root->right);
    }
    bool isMirror(TreeNode* t1, TreeNode* t2) {
    if (!t1 && !t2) return true;    // Both nodes are null
    if (!t1 || !t2) return false;   // One node is null, the other is not
    return (t1->val == t2->val) &&  // Check values
           isMirror(t1->left, t2->right) &&  // Left of t1 with right of t2
           isMirror(t1->right, t2->left);    // Right of t1 with left of t2
}
};
