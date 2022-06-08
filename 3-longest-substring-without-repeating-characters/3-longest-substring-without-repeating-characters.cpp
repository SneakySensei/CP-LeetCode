class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> window;
        int i = 0;
        int j=0;
        int maxLen = 0;
        while(j<s.size()){
            bool elementInSet = window.find(s[j]) != window.end();
            if(elementInSet){
                window.erase(s[i]);
                i++;
            } else {
                window.insert(s[j]);
                maxLen = maxLen > window.size() ? maxLen : window.size();
                j++;
            }
        }
        
        return maxLen;
    }
};