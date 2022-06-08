class Solution {
public:
    char getMax(unordered_map<char, int> &m){
        int maxCount = INT_MIN;
        char maxChar;
        for(auto pair: m){
            if(pair.second > maxCount){
                maxCount = pair.second;
                maxChar = pair.first;
            }
        }
        
        return maxChar;
    }
    int characterReplacement(string s, int k) {
        unordered_map<char, int> count;
        int i = 0;
        int j = 0;
        
        count[s[j]]++;
        
        int maxLen = 0;
        
        while(j<s.size() && i<s.size()){
            char maxChar = getMax(count);
            
            int replacables = j-i+1 - count[maxChar];
            cout << i << " " << j << endl;
            if(replacables <= k){
                maxLen = max(maxLen, j-i+1);
                j++;
                count[s[j]]++;
            } else {
                count[s[i]]--;
                i++;
            }
        }
        
//         if(j-i+1 - count[maxChar] <= k){
//             maxLen = max(maxLen, j-i+1);
//         }
        
        return maxLen;
    }
};