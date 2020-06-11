class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {
        int sh=0;
        for(int i=0;i<shift.size();i++){
            if(shift[i][0]==0){
                sh+=shift[i][1];
            }
            else{
                sh-=shift[i][1];
            }
        }
            sh%=(int)s.size();
            if(sh<0){
                sh+=s.size();
            }

        return s.substr(sh)+s.substr(0,sh);
    }
};