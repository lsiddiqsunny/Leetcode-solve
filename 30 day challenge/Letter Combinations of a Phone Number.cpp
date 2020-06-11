class Solution {
public:
    
    map<char,string>mp;
    vector<string> letterCombinations(string digits) {
        vector<string> list; 
        if(digits.size()==0) return list;
        mp['2']="abc";
        mp['3']="def";
        mp['4']="ghi";
        mp['5']="jkl";
        mp['6']="mno";
        mp['7']="pqrs";
        mp['8']="tuv";
        mp['9']="wxyz";
        
  
        queue<string> q; 
        q.push(""); 

        while (!q.empty()) { 
            string s = q.front(); 
            q.pop(); 

            
            if (s.size() == digits.size()) 
                list.push_back(s); 
            else
                for (auto letter : mp[digits[s.length()]]) 
                    q.push(s + letter); 
        } 

        return list; 
    }
};