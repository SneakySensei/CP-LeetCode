class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, bool> m;
        for(auto x: nums){
            m[x] = true;
        }
        
        vector<vector<int>> seq;
        for(auto x: nums){
            // Detect start of a sequence
            if(!m[x-1]){
                vector<int> temp = {x};
                for(int i = x+1; m[i]; i++){
                    temp.push_back(i);
                }
                seq.push_back(temp);
            }
        }
        
        int max = 0;
        for(auto s: seq){
            max = s.size() > max ? s.size() : max;
        }
        return max;
    }
};