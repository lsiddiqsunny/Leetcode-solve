class Solution {
public:
    int findPoisonedDuration(vector<int>& t, int d) {
        int ret = 0;
      int currEnd = -1;
      int n = t.size();
      for(int i = 0; i < n; i++){
         int start = t[i];
         int end = t[i] + d - 1;
         if(currEnd < start){
            ret += end - start + 1;
            currEnd = end;
         } else {
            ret += end - currEnd;
            currEnd = end;
         }
      }
      return ret;
    }
};