class Solution {
public:
    void moveZeroes(vector<int>& a) {
        int co=0;
        int n = a.size();
        for(int i=0;i<n;i++){
            if(a[i]!=0){
                a[co]=a[i];
                co++;
            }
        }
        while(co<n){
            a[co]=0;
            co++;
        }
    }
};