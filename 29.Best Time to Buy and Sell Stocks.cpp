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

