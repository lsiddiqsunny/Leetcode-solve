class Solution {
public:
    int dir[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

    bool isRobotBounded(string s) {
         pair <int, int> temp({0,0});
      int k = 0;
      for(int i = 0; i < s.size(); i++){
         if(s[i] == 'G'){
            temp.first += dir[k][0];
            temp.second += dir[k][1];
         }else if(s[i] == 'L'){
            k = (k + 1) % 4;
         }else{
            k = ((k - 1) + 4) % 4;
         }
      }
      return temp.first == 0 && temp.second == 0 || k > 0;
    }
};