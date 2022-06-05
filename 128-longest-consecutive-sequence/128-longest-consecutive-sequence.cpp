class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, bool> m;
        for(auto x: nums){
            m[x] = true;
        }
        
        int max = 0;
        for(auto x: nums){
            // Detect start of a sequence
            if(!m[x-1]){
                int i = x+1;
                while(m[i]){
                    i++;
                }
                max = i-x > max ? i-x : max;
            }
        }
        return max;
    }
};