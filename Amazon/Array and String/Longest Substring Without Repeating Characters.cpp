class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        queue<char>q;
        set<char>p;
        int maxi = 0;
        for(char c:s){
            if(p.find(c)==p.end()){
                p.insert(c);
                q.push(c);
            }
            else{
                while(q.front()!=c){
                    char x=q.front();
                    q.pop();
                    p.erase(p.find(x));
                }
                char x=q.front();
                q.pop();
                q.push(x);
                
            }
            //cout<<c<<" "<<p.size()<<endl;
            maxi=max(maxi,(int)p.size());
        }
        return maxi;
    }
};