class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0;i<matrix.size();i++){
            int lo=0;
            int hi=matrix[i].size()-1;
            int mid;
            while(lo<=hi){
                //cout<<i<<" "<<mid<<endl;
                mid=(lo+hi)/2;
                if(matrix[i][mid]==target){
                    return true;
                }
                else if(matrix[i][mid]<target){
                    lo=mid+1;
                }
                else{
                    hi=mid-1;
                }
            }
        }
        return false;
    }
};