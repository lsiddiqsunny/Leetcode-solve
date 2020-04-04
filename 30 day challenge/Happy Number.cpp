class Solution {
public:
    int sumDigitSquare(int n) 
{ 
    int sq = 0; 
    while (n) { 
        int digit = n % 10; 
        sq += digit * digit; 
        n = n / 10; 
    } 
    return sq; 
} 
    bool isHappy(int n) {
        set<int> s; 
        s.insert(n); 
        while(true){
            if(n==1){
                return true;
            }
            n =  sumDigitSquare(n);
            if(s.find(n)!=s.end()){
                return false;
            }    
            s.insert(n);
            
        }
    }
};