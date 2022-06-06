class Solution {
public:
    bool validPalindrome(string s) {
        int i = 0, j=s.size()-1;
        while(i<j){
            if(s[i]!=s[j]){
                return isP(s.substr(i, j-i)) || isP(s.substr(i+1, j-i));
            }
            i++;
            j--;
            
        }
        
        return true;
    }
    
    bool isP(string s){
        int i =0, j =s.size()-1;
        while(i<j){
            if(s[i]!=s[j])return  false;
            i++;
            j--;
        }
        return true;
    }
};