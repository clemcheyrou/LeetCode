class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        int left = 0;
        int right = 1;
        int max = 0;
        while (right < prices.size())
        {
            int current = prices[right] - prices[left];
            if (prices[left] < prices[right])
                max = std::max(current , max);
            else
                left = right;
            right++;
        }
        return (max);
    }

};