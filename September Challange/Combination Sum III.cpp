class Solution {
public:
    vector<vector<int>> sumResults;
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> comb;
        helper(comb, 1, k, n);
        
        return sumResults;
    }
    
    void helper(vector<int>& comb, int begin, int k, int n)
    {
        if (n == 0 && k == 0)
        {
            sumResults.push_back(comb);
            return;
        }
        
        if (k == 0)
            return;
        
        for (int i = begin; i <= 9; i++)
        {
            if (n >= i)
            {
                comb.push_back(i);
                helper(comb, i+1, k-1, n-i);
                comb.pop_back();
            }
        }
    }
    
    
};