class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string> > pos;
        for(int i=0;i<strs.size();i++){
            int marks[26]={0};
            for(int j=0;j<strs[i].size();j++){
                marks[strs[i][j]-'a']++;
            }
            string now="";
            for(int j=0;j<26;j++){
                now+='#';
                now+=(marks[j]+'0');
            }
            if(pos.find(now)!=pos.end()){
                pos[now].push_back(strs[i]);
            }
            else{
                vector<string>x;
                x.push_back(strs[i]);
                pos[now]=x;
            }
        }
        vector<vector<string> > ans;
        for(auto x: pos){
            ans.push_back(x.second);
        }
        return ans;

    }
};