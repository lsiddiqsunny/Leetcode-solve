/*
For two strings s and t, we say "t divides s" if and only if s = t + ... + t  (t concatenated with itself 1 or more times)

Given two strings str1 and str2, return the largest string x such that x divides both str1 and str2.

 

Example 1:

Input: str1 = "ABCABC", str2 = "ABC"
Output: "ABC"
Example 2:

Input: str1 = "ABABAB", str2 = "ABAB"
Output: "AB"
Example 3:

Input: str1 = "LEET", str2 = "CODE"
Output: ""
Example 4:

Input: str1 = "ABCDEF", str2 = "ABC"
Output: ""
*/
class Solution {
public:
    
    bool ok(string s, string x){
        if(s.size()%x.size()!=0){
            return false;
        }
        int co  = s.size()/x.size();
        string y = "";
        for(int i=0;i<co;i++){
            y+=x;
        }
        return y==s;
    }
    
    string gcdOfStrings(string str1, string str2) {
        string ans = "";
        string s1,s2;
        if(str1.size()<str2.size()){
            s1=str1;
            s2=str2;
        }
        else{
            s1=str2;
            s2=str1;
        }
        string mainans="";
        for(int i=0;i<s1.size();i++){
            ans.push_back(s1[i]);
            //cout<<ans<<endl;
            if(ok(s1,ans) and ok(s2,ans)){
                mainans = ans;
            }
            
        }
        return mainans;
    }
};