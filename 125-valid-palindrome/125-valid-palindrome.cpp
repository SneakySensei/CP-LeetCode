class Solution {
public:
    bool isPalindrome(string s) {
        string cleanS = "";
        
        for(char c: s){
            if(isalpha(c) || isdigit(c)){
                cleanS+=tolower(c);
            }
        }
        
        cout << cleanS;
        
        int i = 0, j = cleanS.size()-1;
        while(i<j){
            if(cleanS[i] != cleanS[j]) return false;
            i++;j--;
        }
        return true;
    }
};