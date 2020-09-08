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
class Solution
{
public:
    int treePathsSumUtil(TreeNode *root, int val)
    {
        // Base case
        if (root == NULL)
            return 0;

        // Update val
        val = (val * 2 + root->val);

        // if current node is leaf, return the current value of val
        if (root->left == NULL && root->right == NULL)
            return val;

        // recur sum of values for left and right subtree
        return treePathsSumUtil(root->left, val) +
               treePathsSumUtil(root->right, val);
    }

    int sumRootToLeaf(TreeNode *root)
    {
        return treePathsSumUtil(root, 0);
    }
};