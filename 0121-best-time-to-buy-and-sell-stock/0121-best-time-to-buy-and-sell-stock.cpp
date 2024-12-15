class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        int buy_price=INT_MAX,max_profit=0;
        for(int i=0;i<prices.size()-1;i++){
            if(prices[i]<buy_price){
                buy_price=prices[i];
            }
            if(prices[i+1]>buy_price){
                max_profit=max(max_profit,prices[i+1]-buy_price);
            }
        }
        return max_profit;
    }
};