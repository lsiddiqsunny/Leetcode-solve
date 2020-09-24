class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int need = (int)(n/3);
        
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<int>ans;
        for(auto x:mp){
            if(x.second>need){
                ans.push_back(x.first);
            }
        
        }
        return ans;
    }
};