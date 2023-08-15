class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        int profit = 0;
        int current= prices[0];

        for (vector<int>::iterator it = prices.begin(); it != prices.end(); ++it)
        {
            int price = *it;
            if (price > current)
                profit += price - current;
            current = price;            
        }
        return profit;       
    }
};