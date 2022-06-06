class Solution {
public:
    bool validPalindrome(string s) {
        
        
        return canBePalindrome(s, 1);
    }
    
    bool canBePalindrome(string s,int numDeletions){
        int i =0, j =s.size()-1;
        while(i<j){
            if(s[i]!=s[j]){
                if(numDeletions > 0)
                return canBePalindrome(s.substr(i, j-i), numDeletions-1) || canBePalindrome(s.substr(i+1, j-i), numDeletions-1);
                else return false;
            }
            i++;
            j--;
        }
        return true;
    }
};