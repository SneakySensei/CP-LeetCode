class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> perDayChange;
        for(int i = 1; i<prices.size(); i++){
            perDayChange.push_back(prices[i]-prices[i-1]);
        }
        
        int globalMax = INT_MIN;
        int maxSoFar = 0;
        for(auto x: perDayChange){
            if(x>maxSoFar+x){
                maxSoFar=x;
            } else {
                maxSoFar+=x;
            }
            
            globalMax = max(globalMax, maxSoFar);
        }
        
        return globalMax>0 ? globalMax : 0;
    }
};