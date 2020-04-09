class Solution {
public:
    bool backspaceCompare(string S, string T) {
        stack<char>a,b;
        for(int i=0;i<S.size();i++){
            if(S[i]=='#'){
                if(a.size()==0){
                    continue;
                }
                else{
                    a.pop();
                }
            }
            else{
                a.push(S[i]);
            }
        }
        for(int i=0;i<T.size();i++){
            if(T[i]=='#'){
                if(b.size()==0){
                    continue;
                }
                else{
                    b.pop();
                }
            }
            else{
                b.push(T[i]);
            }
        }
        string x="",y="";
        while(a.size()){
            x.push_back(a.top());
            a.pop();
        }
        while(b.size()){
            y.push_back(b.top());
            b.pop();
        }
        return x==y;
    }
};