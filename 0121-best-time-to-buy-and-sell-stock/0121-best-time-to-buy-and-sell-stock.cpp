class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int bestbuy = prices[0] ;
        int MaxProfit = 0 ;
        for(int i = 1 ; i<n ; i++){
            if(bestbuy < prices[i]){
                MaxProfit = max(MaxProfit , prices[i] - bestbuy);
            }
            bestbuy = min(bestbuy , prices[i]);
        }
        return MaxProfit ;
    }
};