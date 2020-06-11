/**
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * class BinaryMatrix {
 *   public:
 *     int get(int x, int y);
 *     vector<int> dimensions();
 * };
 */

class Solution {
public:
    int leftMostColumnWithOne(BinaryMatrix &binaryMatrix) {
        vector<int>dim = binaryMatrix.dimensions();
        int n = dim[0];
        int m = dim[1];
        int idx  = INT_MAX;
        for(int i=0;i<n;i++){
            int lo = 0;
            int hi = m-1;
            int mid;
            int ans = -1;
            while(lo<=hi){
                mid=(lo+hi)/2;
                int x= binaryMatrix.get(i,mid);
                if(x==1){
                    ans=mid;
                    hi=mid-1;
                }
                else{
                    lo=mid+1;
                }
            }
            if(ans!=-1){
                idx = min(ans,idx);
            }
        }
        if(idx==INT_MAX)
            return -1;
        else return idx;
    }
};