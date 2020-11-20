/*
Given a binary tree, return the level order traversal of its nodes' values. (ie, from left to right, level by level).

For example:
Given binary tree [3,9,20,null,null,15,7],
    3
   / \
  9  20
    /  \
   15   7
return its level order traversal as:
[
  [3],
  [9,20],
  [15,7]
]
*/
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
    map<int,vector<int> > mp;
    void travel(TreeNode* root,int level){
        if(root==0){
            return;
        }
        mp[level].push_back(root->val);
         travel(root->left,level+1);
         travel(root->right,level+1);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
      travel(root,0);  
    vector<vector<int> > ans;
        for(int i=0;;i++){
            if(mp.find(i)==mp.end()) break;
            ans.push_back(mp[i]);
        }
        return ans;
    }
};