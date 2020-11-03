class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,vector<int>> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]].push_back(i);
        }
        vector<int>ans;
        
        for(int i=0;i<nums.size();i++){
            int now = target-nums[i];
            if(now==nums[i]){
                if(mp[now].size()==1){
                    continue;
                }
                ans.push_back(mp[now][0]);
                ans.push_back(mp[now][1]);
                break;
            }
            if(mp.find(now)==mp.end()){
                continue;
            }
            ans.push_back(i);
            ans.push_back(mp[now][0]);
            break;
            
        }
        return ans;
    }
};