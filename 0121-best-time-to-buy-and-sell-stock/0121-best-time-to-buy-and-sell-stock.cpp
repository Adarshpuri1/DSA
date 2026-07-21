class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int buy=prices[0];
        int sell=0;
        int profit=0;
        for(int i=0; i<prices.size(); i++){
            if(prices[i]<buy){
                buy=prices[i];
            }
            profit=prices[i]-buy;
            sell=max(sell,profit);
        }
        return sell;
    }
};