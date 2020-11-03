class Solution {
public:
    bool isPalindrome(int x) {
        string s=to_string(x);
        string t=s;
        reverse(t.begin(),t.end());
        if(t==s){
            return true;
        }
        else return false;
    }
};