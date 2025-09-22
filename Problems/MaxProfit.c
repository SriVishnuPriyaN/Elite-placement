int maxProfit(int* prices, int pricesSize) {
    int maxprofit=0,minprices=prices[0];
    for(int i=1;i<pricesSize;i++){
           if(prices[i]<minprices) minprices=prices[i];
           else{
                int profit = prices[i]-minprices;
                if(profit>maxprofit) maxprofit = profit;
           }
    }
    return maxprofit;
}