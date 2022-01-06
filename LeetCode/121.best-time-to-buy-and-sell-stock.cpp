class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, minPrice;
        for(auto price:prices) {
            minPrice = min(minPrice, price);
            profit = max(profit, price-minPrice);
        }
        return profit;
    }
};