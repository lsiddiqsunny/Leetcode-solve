class Solution {
public:
    long long  divide(long long int dividend,long long  int divisor) {
        int sign=((dividend < 0) ^ (divisor < 0)) ? -1 : 1; 
        dividend = abs(dividend); 
  divisor = abs(divisor); 
  if(sign* exp(log(dividend) - log(divisor)) >= INT_MAX){
      return INT_MAX;
  }
        if(sign* exp(log(dividend) - log(divisor)) <= INT_MIN){
      return INT_MIN;
  }
  return sign * exp(log(dividend) - log(divisor)) ;
    }
};