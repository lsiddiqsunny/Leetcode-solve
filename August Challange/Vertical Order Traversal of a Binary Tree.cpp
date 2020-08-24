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

   void populateMap(TreeNode* root, int col,  map<int,vector<pair<int,int>>> &resMap, int level = 1) {
        resMap[col].push_back({level, root->val});
        if(root->left) {
            populateMap(root->left,col-1,resMap, level+1);
        }
        if(root->right) {
            populateMap(root->right,col+1,resMap, level+1);
        }
    }
	
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
        if(!root) return {};
        
        vector<vector<int>> res;
        map<int,vector<pair<int,int>>> resMap;
        populateMap(root,0,resMap);
        
        for(auto keyPair : resMap) {
		
            auto &vec = keyPair.second;
            sort(vec.begin(), vec.end(), 
                 [](const pair<int,int> &a, const pair<int,int> &b) {
                     if( a.first < b.first) {
                         return true;
                     }
                     else if (a.first > b.first) {
                         return false;
                     }
                     else {
                         return a.second < b.second;
                     }
                 }
                );
            vector<int> newVec(vec.size(),0);
            for(int i = 0; i < vec.size(); ++i) {
                newVec[i] = vec[i].second;
            }
            res.push_back(newVec);
        }
        return res;
    }
};