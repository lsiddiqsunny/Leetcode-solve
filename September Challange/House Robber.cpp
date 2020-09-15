class Solution {
public:
   
    int rob(vector<int>& nums) {
     
    if(nums.size() == 0) {
        return 0;
    } else if(nums.size() == 1) {
        return nums[0];
    }

vector<int>house(nums.size());
    house[0] = nums[0] ;
    house[1] = max(nums[0], nums[1]);
    
   for(int i=2;i<nums.size();i++)
        house[i] = max(nums[i] + house[i - 2], house[i - 1]);
    
return house[nums.size()-1];
    }
};