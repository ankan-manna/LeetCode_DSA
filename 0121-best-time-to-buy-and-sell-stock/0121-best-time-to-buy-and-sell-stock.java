class Solution {
    public int maxProfit(int[] prices) {
        int lav=0;
        int buy=Integer.MAX_VALUE;
        int sell=0;
        int buy_idx=0;

        for(int i=0;i<prices.length;i++){
            if(prices[i]<buy){
            buy=prices[i];
            buy_idx=i;
            sell=0;// for new buy prev sell not valid
            System.out.println("buy-"+buy);
            }
            if(prices[i]>sell && i>buy_idx){
            sell=prices[i];
            System.out.println("sell-"+sell);
            }
            lav=Math.max(lav,sell-buy);
        }
        return lav;
    }
}