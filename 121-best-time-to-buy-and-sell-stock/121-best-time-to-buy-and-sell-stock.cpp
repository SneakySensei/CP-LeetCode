class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 1) return 0;
        vector<int> diffs;
        for(int i = 0; i<prices.size()-1; i++){
            diffs.push_back(prices[i+1]-prices[i]);
        }
        
        int maxSoFar = 0;
        int globalMax = INT_MIN;
        for(auto num: diffs){
            if(num > maxSoFar+num) maxSoFar = num;
            else maxSoFar += num;
            
            if(maxSoFar > globalMax) globalMax = maxSoFar;
        }
        return globalMax < 0 ? 0 : globalMax;
    }
};