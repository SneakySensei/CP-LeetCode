class Solution {
public:
    int myAtoi(string s) {
        int count = 0;
        for(int i = 0; i<s.size(); i++){
            if(!((s[i]>='0' && s[i] <= '9') || s[i] == '+' || s[i] == '-')) {
                if(s[i] == ' ')
                count++;
                else return 0;
                                
            } else break;               
        }
        s = s.substr(0+count);
        int sign = 1;
        if(s[0] == '+' || s[0] == '-'){
            sign = s[0] == '-' ? -1 : 1;
            s=s.substr(1);
        }
        long long int num = 0;
        for(int i = 0; i<s.size(); i++){
            if(s[i]<'0' || s[i]>'9') break;
            num = (num*10) + (int)(s[i]-'0');
            if(num * sign < INT_MIN) num = (long long int) INT_MIN * -1;
            if(num * sign > INT_MAX) num = INT_MAX;
            
        }
        
        return num * sign;
    }
};