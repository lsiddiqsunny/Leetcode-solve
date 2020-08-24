class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        int  num=0;
        vector<int>ans;
        int n = nums.size();
        int a[n+1];
        
        for(int i=0;i<n;i++){
            a[i+1]=nums[i];
        }
        for(int i = 1; i <= n; i++)  
    {  
        if(a[abs(a[i])] > 0)  
            a[abs(a[i])] = -a[abs(a[i])];  
        else
            ans.push_back(abs(a[i]));  
    }    
        return ans;
    }
};