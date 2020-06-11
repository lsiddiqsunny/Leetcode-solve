/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int height(TreeNode* root, int& ans) 
{ 
    if (root == NULL) 
        return 0; 
  
    int left_height = height(root->left, ans); 
  
    int right_height = height(root->right, ans); 
  
    // update the answer, because diameter of a 
    // tree is nothing but maximum value of 
    // (left_height + right_height + 1) for each node 
    ans = max(ans, 1 + left_height + right_height); 
  
    return 1 + max(left_height, right_height); 
} 
    int diameterOfBinaryTree(TreeNode* root) {
    if (root == NULL) 
        return 0; 
    int ans = INT_MIN; // This will store the final answer A
    int height_of_tree = height(root, ans); 
    return ans-1;
    }
};