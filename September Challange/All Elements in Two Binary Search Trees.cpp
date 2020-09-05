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
    void visit(TreeNode* root,vector<int>&v){
        if(!root){
            return;
        }
        if(root->left){
            visit(root->left,v);
        }
        v.push_back(root->val);
        
        if(root->right){
            visit(root->right,v);
        }
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>v;
        visit(root1,v);
        visit(root2,v);
        sort(v.begin(),v.end());
        return v;
        
    }
};