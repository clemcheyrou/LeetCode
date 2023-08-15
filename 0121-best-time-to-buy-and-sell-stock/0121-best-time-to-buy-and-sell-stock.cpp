class Solution
{
    public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int buyIndex = 0;
        int numPrices = prices.size();

        for (int sellIndex = 1; sellIndex < numPrices; ++sellIndex) {
            int currentProfit = prices[sellIndex] - prices[buyIndex];
            if (currentProfit > 0)
                maxProfit = max(maxProfit, currentProfit);
            else
                buyIndex = sellIndex;
        }
        
        return (maxProfit);
    }
};