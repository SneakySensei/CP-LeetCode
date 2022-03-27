class Solution {
private:
    static bool compareInterval(vector<int> a, vector<int> b){
        return a[0]<b[0];
    } 
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), compareInterval);
        int start = intervals[0][0];
        int end = intervals[0][1];
        vector<vector<int>> res;
        
        for(auto x: intervals){
            if(end < x[0]){
                res.push_back({start, end});
                start = x[0];
            }
            end = max(end, x[1]);
        }
        res.push_back({start, end});
        return res;
    }
};