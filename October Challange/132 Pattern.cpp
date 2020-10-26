class Solution {
public:
    bool find132pattern(vector<int>& nums) {
          int n = nums.size();
        vector<int>min_dp(n);
        stack<int>st;
        min_dp[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            min_dp[i] = min(min_dp[i-1],nums[i]);
        }
        for(int i=n-1;i>=0;i--){
            if(nums[i]>min_dp[i]){
                while(!st.empty() && st.top()<=min_dp[i])
                    st.pop();
                if(!st.empty() && st.top() < nums[i])return true;
                st.push(nums[i]);
            }
        }
        return false;
    }
};