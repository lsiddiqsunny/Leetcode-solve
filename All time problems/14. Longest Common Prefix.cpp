class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        int sz=INT_MAX;
        for(int i=0;i<strs.size();i++){
            sz=min(sz,(int)strs[i].size());
        }
        if(sz==INT_MAX){
            return ans;
        }
        for(int i=0;i<sz;i++){
            char c=strs[0][i];
            for(int l=0;l<strs.size();l++){
                if(strs[l][i]!=c){
                    return ans;
                }
                
            }
            ans+=c;
        }
        return ans;
    }
};