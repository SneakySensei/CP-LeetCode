class Solution {
   
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> m;
        for(auto x: nums){
            if(m[x]==1){return x;}
            else m[x] = 1;
        }
        return -1;
    }
};