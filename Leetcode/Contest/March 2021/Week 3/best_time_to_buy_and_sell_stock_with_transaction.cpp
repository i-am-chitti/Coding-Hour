class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int N=prices.size(),maxProfit=0;
        int minimum=prices[0];
        for(int i=1;i<N;i++) {
            if(prices[i]<minimum) minimum=prices[i];
            else if(prices[i]>minimum+fee) {
                maxProfit+=prices[i]-minimum-fee;
                minimum=prices[i]-fee;
            }
        }
        return maxProfit;
    }
};