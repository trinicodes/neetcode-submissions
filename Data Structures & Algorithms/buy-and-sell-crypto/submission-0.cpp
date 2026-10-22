class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int buyIndex = 0;
        int sellIndex = 1;

        while (sellIndex < prices.size()) {
            if (prices[buyIndex] < prices[sellIndex]) {
            int profit = prices[sellIndex] - prices[buyIndex];

            maxProfit = max(maxProfit, profit);    
            }
            else {
                buyIndex = sellIndex;
            }
            sellIndex++;
            
        }
        return maxProfit;
    }
};
