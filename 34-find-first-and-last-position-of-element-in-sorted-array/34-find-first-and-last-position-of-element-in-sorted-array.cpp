class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result;
        if(!binary_search(nums.begin(),nums.end(),target))
        {
            result.push_back(-1);
            result.push_back(-1);
            return result;
        }
        vector<int>::iterator left=lower_bound(nums.begin(),nums.end(),target);
        vector<int>::iterator right=upper_bound(nums.begin(),nums.end(),target);
        result.push_back(left-nums.begin());
        result.push_back(right-nums.begin()-1);
        return result; 
        
    }
};