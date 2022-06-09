class Solution {
public:
    void log(unordered_map<char, int> &m){
        for(auto pair: m){
            cout << pair.first << ":" << pair.second << ", ";
        }
        
        cout << endl;
    }
    
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()) return false;
        int windowSize = s1.size();
        
        vector<int> m(26, 0);
        vector<int> s(26, 0);
        
        for(auto ch: s1){
            s[ch-'a']++;
        }
        
        
        int i = 0;
        int j = -1;
        
        while(j < windowSize-1){
            j++;
            m[s2[j]-'a']++;
        }
        
        while(j<s2.size()){
            if(s==m) return true;
            else if(j==s2.size()-1){
                return false;
            }
            else {
                m[s2[i]-'a']--;
                i++;
                j++;
                m[s2[j]-'a']++;
                
            }
        }
        
        return false;
    }
};