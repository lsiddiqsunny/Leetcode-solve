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
    int minDepth(TreeNode* root) {
        if(root==0){
            return 0;
        }
        if(root->left==0 and root->right==0){
            return 1;
        }
        if(root->left and  root->right==0){
            return min(1+minDepth(root->left),INT_MAX);
        }
        else if(root->right and root->left==0){
            return min(1+minDepth(root->right),INT_MAX);
        }
        else
        return min(1+minDepth(root->left),1+minDepth(root->right));
    }
};