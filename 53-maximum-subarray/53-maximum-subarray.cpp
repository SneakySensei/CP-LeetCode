class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int globalMax = INT_MIN;
        int currentMax = 0;
        for(auto i : nums){
            if(i > currentMax+i){
                currentMax = i;
            } else {
                currentMax+=i;
            }
            globalMax = max(currentMax, globalMax);
        }
        return globalMax;
    }
};