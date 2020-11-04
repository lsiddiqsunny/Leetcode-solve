/*
Given the root of a Binary Search Tree and a target number k, return true if there exist two elements in the BST such that their sum is equal to the given target.
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
#include <algorithm>
class Solution {
public:
    void traverse(TreeNode* root,vector<int>&v){
        if(root==0){
            return;
        }
        traverse(root->left,v);
        v.push_back(root->val);
        traverse(root->right,v);
    }

    bool findTarget(TreeNode* root, int k) {
        vector<int>v;
        traverse(root,v);
        for(int i=0;i<v.size();i++){
            int now = v[i];
            int need = k-now;

            if(need<now){
                if(binary_search(v.begin(),v.begin()+i,need)){
                    return true;
                }
            }
            else{
                if(binary_search(v.begin()+i+1,v.end(),need)){
                    return true;
                }
            }
        }
        return false;
        
    }
};