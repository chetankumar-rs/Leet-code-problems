class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = 0;
        for(int i = 1;i < n;i++){
            if(prices[i] > prices[i-1]){
                int res = prices[i] - prices[i-1];
                profit+=res;
            }
        }
        return profit;
    }
};
