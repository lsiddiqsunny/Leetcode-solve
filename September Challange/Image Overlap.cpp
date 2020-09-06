class Solution {
public:
    int largestOverlap(vector<vector<int>>& A, vector<vector<int>>& B) {
          return max(helper(A, B), helper(B, A));
    }
    int helper(vector<vector<int>>& A, vector<vector<int>>& B){
        int overlap = 0;
        int n = A.size();
        for(int x = 0; x < n; ++x){
            for(int y = 0; y < n; ++y){
                int count = 0;
                for(int ia = 0, ib = x; ib < n; ++ia, ++ib){
                    for(int ja = 0, jb = y; jb < n; ++ja, ++jb){
                        count += (A[ia][ja] & B[ib][jb]);
                    }
                }
                overlap = max(overlap, count);
            }
        }
        return overlap;
    }
};