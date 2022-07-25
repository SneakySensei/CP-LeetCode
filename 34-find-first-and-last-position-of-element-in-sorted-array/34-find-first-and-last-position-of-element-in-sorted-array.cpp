class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int i = 0;
        int j = nums.size()-1;
        while(i<=j){
            int mid = (i+j)/2;
            int n = nums[mid];
            if(n==target){
                int a = mid;
                while(a > 0 && nums[a-1] == target){
                    a--;
                }
                
                int b = mid;
                while(b < nums.size()-1 && nums[b+1] == target){
                    b++;
                }
                return {a,b};
            } else if(target > n){
                i = mid+1;
            } else {
                j = mid - 1;
            }
        }
        return {-1, -1};
    }
};