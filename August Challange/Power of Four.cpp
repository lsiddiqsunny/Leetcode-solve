class Solution {
public:
    bool isPowerOfFour(int num) {
        if(num<=0) return false;
       
        double l = log(num)/log(4.0);
        
        int l1 = log(num)/log(4.0);
        return fabs(l-l1)<=0.00000000001;
    }
};