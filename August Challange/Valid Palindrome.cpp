class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        for(int i=0;i<s.size();i++){
            if(s[i]==' ') continue;
            if(s[i]<='Z' and s[i]>='A'){
                str.push_back(char(s[i]+32));
            }
            else if(s[i]<='z' and s[i]>='a'){
                str.push_back(s[i]);
            }
            else if(s[i]>='0' and s[i]<='9'){
                str.push_back(s[i]);
            }
        }
        string str1 = str;
        reverse(str1.begin(),str1.end());
        return str==str1;
    }
};