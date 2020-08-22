class Solution {
public:
    
    
    string countAndSay(int n) {
        if(n==1){
            return "1";
            
        }
        string s = countAndSay(n-1);
        string ans = "";
        for(int i=0;i<s.size();i++){
            char now = s[i];
            int co=0;
            while(i<s.size() and now == s[i]){
                i++;
                co++;
            }
            i--;
            ans+=to_string(co);
            ans+=now;
            
        }
        return ans;
    }
};