class Solution {
public:
    vector<string> removeDupWord(string str) 
{ 
        vector<string>sol;
    string word = ""; 
   for (auto x : str) 
   { 
       if (x == ' ') 
       { 
           sol.push_back(word);
          // cout << word << endl; 
           word = ""; 
       } 
       else
       { 
           word = word + x; 
       } 
   }  
  sol.push_back(word);
        return sol;
}
    bool wordPattern(string pattern, string str) {
        map<char,int>mp;
        int co=0;
        for(int i =0;i<pattern.size();i++){
            char ch = pattern[i];
            if(mp.find(ch)==mp.end()){
                co++;
                mp[ch]=co;
            }
            
        }
        map<string,int>mp1;
        co=0;
        vector<string> sol = removeDupWord(str);
        for(int i =0;i<sol.size();i++){
            
            string s = sol[i];
            if(mp1.find(s)==mp1.end()){
                co++;
                mp1[s]=co;
            }
        }
        string x = "";
        for(int i =0;i<pattern.size();i++){
            x+=to_string(mp[pattern[i]]);
            
        }
        
        string y = "";
        for(int i =0;i<sol.size();i++){
            y+=to_string(mp1[sol[i]]);
            
        }
       // cout<<x<<" "<<y<<endl;
        return x==y;
    }
};