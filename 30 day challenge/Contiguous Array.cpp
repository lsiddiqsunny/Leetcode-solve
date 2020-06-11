class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        map<int,int> mp;
        mp[0]=-1;
        int maxlen = 0, count = 0;
        for (int i = 0; i < nums.size(); i++) {
            count = count + (nums[i] == 1 ? 1 : -1);
            if (mp.find(count)!=mp.end()) {
                maxlen = max(maxlen, i - mp[count]);
            } else {
                mp[count]=i;
            }
        }
        return maxlen;
    }
};