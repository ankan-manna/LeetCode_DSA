class Solution {
public:
    int maxProfit(vector<int>& prices) {//[2,4,1]
        int buy=prices[0],lav=0;
        for(int i=1;i<prices.size();i++){
            int cost=prices[i]-buy;
            lav=max(lav,cost);
            buy=min(buy,prices[i]);
        }
        return lav;
    }
};