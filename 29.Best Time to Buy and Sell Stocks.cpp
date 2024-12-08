/* int n  = prices.size();
        int profit = 0;
        for(int i = 0;i < n-1;i++){
            for(int j = i+1;j < n;j++){
            if(prices[i] < prices[j]){
            int res = prices[j] - prices[i];
            profit = max(profit,res);        
            }
            }
        }
       return profit;*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
       
       int price=INT_MAX;
       int profit = 0;
       for(int ele : prices){
        price = min(price,ele);
        profit = max(profit,ele - price);
       }
       return profit; 
    }
};

