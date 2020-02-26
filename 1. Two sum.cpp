class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;
        }
        
        for(int i=0;i<nums.size();i++){
            int now=nums[i];
            int rem=target-now;
            if(mp.find(rem)== mp.end() || mp[rem]==i){
                continue;
            }
            else{
                vector<int>ans;
                ans.push_back(min(i,mp[rem]));
                ans.push_back(max(i,mp[rem]));
                return ans;
            }
        }
        vector<int> ans;
        return ans;
        
        
    }
};