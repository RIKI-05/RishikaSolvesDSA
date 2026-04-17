class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxPro = 0;
        int buy = prices[0];

        for(int i=1; i<prices.size(); i++){
            if(buy>prices[i]){
                buy = prices[i];
            }
            else{
                maxPro = max(maxPro, prices[i]-buy);
            }
        }

        return maxPro;
    }
};
