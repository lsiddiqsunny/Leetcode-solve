class Solution {
public:
    bool intersect(vector <int>& a, vector <int>& b){
      return a[1] >= b[0];
   }
   static bool cmp(vector <int>& a, vector <int>& b){
      return a[1] < b[1];
   }
   void manipulate(vector <int>& a, vector <int>& b){
      a[0] = min(a[0], b[0]);
      a[1] = max(a[1], b[1]);
   }
   int findMinArrowShots(vector<vector<int>>& points) {
      sort(points.begin(), points.end(), cmp);
      int n = points.size();
      if(!n) return 0;
      int currEnd = points[0][1];
      int cnt = 1;
      for(int i = 1; i < n; i++){
         if(currEnd < points[i][0]){
            cnt++;
            currEnd = points[i][1];
         }
      }
      return cnt;
   }
};