class Solution {
public:
    char findTheDifference(string s, string t) {
        int mp[26]={0};
        for(int i=0;i<s.size();i++){
            mp[s[i]-'a']++;
        }
        for(int i=0;i<t.size();i++){
            mp[t[i]-'a']--;
        }
        for(int i=0;i<26;i++)
        {
            if(mp[i]!=0){
                return (char)(i+'a');
            }
        }      
        
        return 'a';
    }
};