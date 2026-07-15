class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int profit = 0;
        int i = 0, j = 1;

        while(j <prices.size()){
            if(prices[i] < prices[j]){
                int curr = prices[j] - prices[i];
                profit = max(curr, profit);
            }
            else{
                i = j;
            }
            j++;
        }

      return profit;
    }
};
