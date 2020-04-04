class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int maxi = a[0]; 
        int cmax = a[0]; 
  
        for (int i = 1; i < a.size(); i++) 
        { 
            cmax = max(a[i], cmax+a[i]); 
            maxi = max(maxi, cmax); 
        } 
        return maxi; 
    }
};