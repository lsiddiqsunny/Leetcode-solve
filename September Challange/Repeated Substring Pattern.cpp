class Solution {
public:
    void computeLPSArray(string str, int M, int lps[]) 
{ 
    int len = 0; 
    int i; 
  
    lps[0] = 0; 
    i = 1; 
  
    while (i < M) 
    { 
       if (str[i] == str[len]) 
       { 
           len++; 
           lps[i] = len; 
           i++; 
       } 
       else 
       { 
          if (len != 0) 
          { 
             
             len = lps[len-1]; 
  
            
          } 
          else 
          { 
             lps[i] = 0; 
             i++; 
          } 
       } 
    } 
} 
    bool repeatedSubstringPattern(string s) {
        int n = s.size(); 
    int lps[n]; 
  
    computeLPSArray(s, n, lps); 
  
    
    int len = lps[n-1]; 
  
    
    return (len > 0 && n%(n-len) == 0)? true: false; 
    }
};