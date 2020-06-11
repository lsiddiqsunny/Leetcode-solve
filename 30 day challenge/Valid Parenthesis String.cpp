class Solution {
public:
    bool checkValidString(string s) {
        if ( s.size() == 0) {
            return true;
        }
 
        int lo = 0;
        int hi = 0;
        for (int i = 0; i < s.size(); i++) {
            char c = s[i];
 
            if (c == '(') {
                lo++;
                hi++;
            } else if (c == ')') {
                if (lo > 0) {
                    lo--;
                }
                hi--;
            } else {
                if (lo > 0) {
                    lo--;
                }
                hi++;
            }
 
            if (hi < 0) {
                return false;
            }
        }
 
        return lo == 0;
    }
};