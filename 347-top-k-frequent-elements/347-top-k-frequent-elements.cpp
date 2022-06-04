class Solution {
public:
    static bool cmp(pair<int, int> &A, pair<int, int> &B){
        return A.second > B.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> count;
        for(auto x: nums){
            count[x]++;
        }
        
        vector<pair<int, int>> pairs;
        for(auto pair: count){
            pairs.push_back(pair);
        }
        
        sort(pairs.begin(), pairs.end(), cmp);
        for(auto x: pairs){
            cout << x.first << " " << x.second << endl;
        }
        vector<int> res;
        for(int i = 0; i<k; i++){
            res.push_back(pairs[i].first);
        }
        return res;
    }
};