class Solution {
public:
   int solve(vector <int>& nums, int start, int end){
      int ans = nums[start];
      vector <int> dp(nums.size());
      dp[start] = nums[start];
      for(int i = start + 1; i <= end; i++){
         int last = dp[i - 1];
         int lastToLast = i - 2 < start? 0 : dp[i - 2];
         dp[i] = max(nums[i] + lastToLast, last);
         ans = max(dp[i], ans);
      }
      return ans;
   }
   int rob(vector<int>& nums) {
      int n = nums.size();
      if(!n)return 0;
      if(n == 1)return nums[0];
      return max(solve(nums, 0, n - 2), solve(nums, 1, n - 1));
   }
};