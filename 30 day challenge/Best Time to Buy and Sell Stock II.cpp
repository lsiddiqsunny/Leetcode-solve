class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==0){
            return 0;
        }
        int ans=0;
        int mini = prices[0];
        for(int i=1;i<prices.size();i++){
            if(prices[i-1]>prices[i]){
                ans+=(prices[i-1]-mini);
                mini=prices[i];
            }
        }
        ans+=(prices[prices.size()-1]-mini);
        return ans;
    }
};