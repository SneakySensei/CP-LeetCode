class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> count;
        for(int i = 0; i < s.size(); i++){
            count[s[i]]++;
        }
        for(int i = 0; i < t.size(); i++){
            if(count[t[i]]>0){
                count[t[i]]--;
            } else {
                return false;
            }
        }
        return true && s.size() == t.size();
        
    }
};