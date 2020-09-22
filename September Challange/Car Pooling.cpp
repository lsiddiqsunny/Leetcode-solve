class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        int timestamp[1001]={0};
        for (auto trip : trips) {
            timestamp[trip[1]] += trip[0];
            timestamp[trip[2]] -= trip[0];
        }
        int ued_capacity = 0;
        for (int number : timestamp) {
            ued_capacity += number;
            if (ued_capacity > capacity) {
                return false;
            }
        }
        return true;
    }
    
};