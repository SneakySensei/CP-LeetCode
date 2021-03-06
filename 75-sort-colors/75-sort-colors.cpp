class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> count = {0,0,0};
        for(auto  x: nums){
            count[x]++;
        }
        int j = 0;
        for(int i = 0; i<nums.size(); i++){
            if(count[0] > 0){
                nums[i] = 0;
                count[0]--;
            } else if(count[1] > 0){
                nums[i] = 1;
                count[1]--;
            } else if(count[2] > 0){
                nums[i] = 2;
                count[2]--;
            }
        }
    }
};