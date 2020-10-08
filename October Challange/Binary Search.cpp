class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lo = 0;
        int hi = nums.size()-1;
        int mid=0;
        while(lo<=hi){
            mid = (lo+hi)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                lo = mid+1;
            }
            else{
                hi=mid-1;
            }
        }
        return -1;
    }
};