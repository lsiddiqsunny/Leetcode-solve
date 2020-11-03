class Solution {
public:
    string convert(string s, int numRows) {
        string ans="";
        int sz=s.size();
        
        int col=ceil((numRows*sz)/(numRows*2.0+(numRows-2)));
        char str[numRows][2*col+1];
        for(int i=0;i<numRows;i++){
            for(int j=0;j<=2*col;j++){
                str[i][j]=' ';
            }    
        }
        int nowcol=0;
        for(int i=0;i<s.size();){
            int j;
            for(j=i;j<i+numRows;j++){
                if(j>=sz){
                    break;
                }
                
                str[j-i][nowcol]=s[j];
                //cout<<j-i<<endl;
            }
            i=j;
            for(j=1;j<=numRows-2;j++){
                if(i>=sz){
                    break;
                }
                nowcol++;
              //  cout<<s[i]<<endl;
                str[numRows-j-1][nowcol]=s[i];
              //  cout<<nowcol<<endl;
                i++;
            }
           // cout<<endl;
            nowcol++;
            
        }
        
        for(int i=0;i<numRows;i++){
            for(int j=0;j<=2*col;j++){
                if(str[i][j]!=' '){
                    ans+=str[i][j];
                }
            }    
        }
        
        return ans;
    }
};