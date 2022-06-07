class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int holdingPrice = -1;
        int totalProfit = 0;
        for(auto x: prices){
            if(holdingPrice == -1){
                holdingPrice = x;
            } else if(x>holdingPrice) {
                totalProfit+=x-holdingPrice;
                holdingPrice=x;
            } else{
                holdingPrice=x;
            }
        }
        return totalProfit;
    }
};