class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k %= (int) nums.size();
        vector<int>ans;
        for(int i=0;i<k;i++){
            ans.push_back(nums.back());
            nums.pop_back();
        }
        reverse(ans.begin(),ans.end());
        for(int i=0;i<nums.size();i++){
            ans.push_back(nums[i]);
        }
        nums=ans;
    }
};