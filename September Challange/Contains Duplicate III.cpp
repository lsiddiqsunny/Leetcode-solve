class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        multiset <int> s;
      int n = nums.size();
      for(int i = 0; i< n; i++){
         multiset <int> :: iterator x = s.lower_bound(nums[i]);
         if(x != s.end() && *x <= nums[i] + t ) return true;
            if(x != s.begin()){
               x = next(x, -1);
               if(*x + t >= nums[i])return true;
            }
            s.insert(nums[i]);
            if(i >= k){
               s.erase(nums[i - k]);
            }
         }
         return false;
    }
};