class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int co=0;
        for(auto x: mp){
            int now = x.first+k;
            if(now==x.first){
                if(mp[now]>1){
                    co++;
                    
                }
                continue;
            }
            if(mp.find(now)!=mp.end()){
                co++;
            }
        }
        return co;
    }
};