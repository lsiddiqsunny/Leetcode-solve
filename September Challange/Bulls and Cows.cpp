class Solution {
public:
    string getHint(string secret, string guess) {
        vector<int>digit(10,0);
        int countCow = 0;
        int countBull = 0;
        for(int i = 0; i < secret.size(); i++){
            char s = secret[i];
            char g = guess[i];
            if(s == g){
                countBull ++;
            }else{
                if(digit[ s -'0'] < 0){
                    countCow ++;
                }
                if(digit[g - '0'] > 0){
                    countCow++;
                }
                digit[s-'0'] ++;
                digit[g-'0'] --;
            }
        }
         return to_string(countBull) + "A" + to_string(countCow) + "B";
    }
};