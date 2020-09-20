class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector <int> ans;
      for(int i = 1; i <= 9; i++){
         for(int j = 1; j + i - 1 <= 9; j++){
            int x = 0;
            for(int k = 0; k < i; k++){
               x = (x*10) + (j + k);
            }
            if(low <= x && x <= high){
               ans.push_back(x);
            }
         }
      }
      return ans;
    }
};