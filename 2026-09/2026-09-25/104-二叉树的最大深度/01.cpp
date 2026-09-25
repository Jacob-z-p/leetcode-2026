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
    int ans = 0;
    void f(TreeNode* root, int depth) {
        if (root == nullptr) {
            return;
        }
        ans = max(ans, depth);
        if (root->left) {
            f(root->left, depth + 1);
        }
        if (root->right) {
            f(root->right, depth + 1);
        }
    }
    int maxDepth(TreeNode* root) {
        f(root, 1);
        return ans;
    }
};