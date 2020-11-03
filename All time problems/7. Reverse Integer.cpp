class Solution {
public:
    int reverse(int x) {
        if(x== INT_MIN){
            return 0;
        }
        int sign = x<0?1:0;
        x=x<0?-x:x;
        
        int ans=0;
        while(x){
            if(ans<=(INT_MAX)/10)
            ans*=10;
            else return 0;
            ans+=x%10;
            x/=10;
            
        }
        if(sign)
            ans*=-1;
        return ans;
    }
};