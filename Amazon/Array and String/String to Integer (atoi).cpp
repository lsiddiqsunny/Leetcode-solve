class Solution {
public:
    int myAtoi(string str) {
        long long int ans=0;
        
        int isPos=1;
        int pos=-1;
        for(int i=0;i<str.size();i++){
            if(str[i]==' '){
                continue;
            }
            if(str[i]<='9' and str[i]>='0'){
                isPos=1;
                pos=i;
                break;
            }
            else if(str[i]=='-'){
            if(i+1<str.size() and str[i]<='9' and str[i]>=0){
             //   cout<<"here";
                isPos=0;
                pos=i+1;
                break;
            }
            return 0;
            }
            else if(str[i]=='+'){
            if(i+1<str.size() and str[i]<='9' and str[i]>=0){
             //   cout<<"here";
                isPos=1;
                pos=i+1;
                break;
            }
            return 0;
            }
            else{
                return 0;
            }
        }
        if(pos==-1){
            return 0;
        }
        while(pos<str.size() and str[pos]=='0'){
            pos++;
        }
        int j;
        for(j=pos;j<str.size();j++){
            if(str[j]<='9' and str[j]>='0'){
                continue;
            }
            else{
                j--;
                break;
            }
        }
        if(j==str.size()){
            j--;
        }
        cout<<pos<<" "<<j<<endl;
        long long now=1;
        ans=0;
        if((j-pos+1)>10){
                            if(!isPos){
                    return INT_MIN;
                }
                else return INT_MAX;
        }
        for(int k=j;k>=pos;k--){
            ans=ans+(str[k]-'0')*now;
            now*=10;

            if(!isPos){
                if(ans*-1<=INT_MIN){
                    return INT_MIN;
                }
            }
            else{
                if(ans>=INT_MAX){
                    return INT_MAX;
                }
            }
        }
        if(!isPos) ans*=-1;
        return ans;
    }
};