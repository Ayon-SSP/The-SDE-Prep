/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int rightMax) : val(rightMax), left(nullptr), right(nullptr) {}
 *     TreeNode(int rightMax, TreeNode *left, TreeNode *right) : val(rightMax), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxSum;
    int func(TreeNode *root) {
        if (root == NULL)
            return 0;
        int weight = root->val;
        int rightMax = func(root->right);
        int y = func(root->left);

        int p = max(weight, max(rightMax + weight, y + weight));
        maxSum = max(maxSum, max(p, weight + rightMax + y));

        return p;
    }
    int maxPathSum(TreeNode *root) {
        if (root == NULL)
            return 0;
        maxSum = root->val;
        func(root);
        return maxSum;
    }
};