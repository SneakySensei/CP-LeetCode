class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if (nums.size() < 3) return {};
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        for(auto x: nums) cout << x << " ";
        cout << endl;
        for(int i = 0; i<nums.size()-2; i++){
            // if current item is same as prev then skip it
            if(i>0 && nums[i] == nums[i-1]) continue;
            
            // two pointer for right half of nums
            int j = i+1;
            int k = nums.size()-1;
            
            int target = -nums[i];
            
            cout << target << endl;
            
            vector<vector<int>> two = twoSum(nums, j, k, target);
            if(two.empty()) continue;
            
            for(auto x: two){
                res.push_back(x);
            }
        }
        
        return res;
    }
    
    vector<vector<int>> twoSum(vector<int> &nums, int start, int end, int target){
        vector<vector<int>> res;
        int i = start;
        int j = end;
        while(i<j){
            if(i > start && nums[i] == nums[i-1]){
                i++;
                continue;
            }
            if(j < end && nums[j] == nums[j+1]){
                j--;
                continue;
            }
            
            if(nums[i] + nums[j] > target){
                j--;
            } else if(nums[i] + nums[j] < target){
                i++;
            } else {
                 res.push_back({-target, nums[i], nums[j]});
                i++; j--;
            };
        }
        return res;
    }
};