class Solution {
public:
    bool detectCapitalUse(string word) {
        if(word.size()==1) return true;
        int co=0;
        for(int i=0;i<word.size();i++){
            if(word[i]>='A' and word[i]<='Z') co++;
        }
        if(co==0) return true;
        if(co==word.size()) return true;
        if(co==1 and word[0]>='A' and word[0]<='Z'){
            return true;
        }
        return false;

    }
};