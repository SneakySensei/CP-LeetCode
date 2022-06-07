class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int globalMax = INT_MIN;
        int maxSoFar;
        for(int i = 0; i<nums.size(); i++){
            if(i==0) maxSoFar = nums[i];
            else if(maxSoFar+nums[i] > nums[i]){
                maxSoFar += nums[i];
            } else{
                maxSoFar = nums[i];
            }
            
            globalMax = max(globalMax, maxSoFar);
        }
        
        return globalMax;
    }
};