class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int least = INT_MAX,profit=0,currprofit=0;
        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < least){
                least = prices[i];
            }
            currprofit = prices[i] - least;
            if(profit < currprofit){
                profit = currprofit;
            }
        }
        return profit;
    }
};