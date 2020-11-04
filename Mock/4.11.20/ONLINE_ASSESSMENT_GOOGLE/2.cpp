/*
Given a non-empty string check if it can be constructed by taking a substring of it and appending multiple copies of the substring together. You may assume the given string consists of lowercase English letters only and its length will not exceed 10000.

 

Example 1:

Input: "abab"
Output: True
Explanation: It's the substring "ab" twice.
Example 2:

Input: "aba"
Output: False
Example 3:

Input: "abcabcabcabc"
Output: True
Explanation: It's the substring "abc" four times. (And the substring "abcabc" twice.)
*/
class Solution {
public:
    bool check(string s,string t){
        if(s.size()%t.size()!=0){
            return false;
        }
        int co = s.size()/t.size();
        
        string now = "";
        for(int i=0;i<co;i++){
            now+=t;
        }
        //cout<<co<<" "<<s<<" "<<t<<" "<<now<<endl;
        return s==now;
    }
    bool repeatedSubstringPattern(string s) {
        string now = "";
        string ans = "";
        for(int i=0;i<s.size()-1;i++){
            now.push_back(s[i]);
           // cout<<now<<endl;
            if(check(s,now)){
                ans=now;
            }
        }
       // cout<<ans<<endl;
        return ans.size()!=0;
    }
};