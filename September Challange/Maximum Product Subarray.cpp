class Solution {
public:
    int maxProduct(vector<int>& nums) {
      if(nums.size()==0)
            return 0;
        int maxProduct = nums[0];
        int max_temp = nums[0];
        int min_temp = nums[0];
        for(int i=1;i<nums.size();i++) {
            int a = nums[i]*max_temp;
            int b = nums[i]*min_temp;
            max_temp = max(max(a,b), nums[i]);
            min_temp = min(min(a,b), nums[i]);
            maxProduct = max(maxProduct, max_temp);
        }
        return maxProduct;
    }
};