class Solution {
public:
    int numSquares(int n) {
        // unordered_map<int, int> memo;
        // return getSquares(n, memo);
        
        vector<int> dp(n+1, n);
        dp[0]=0;
        
        for(int num=1; num<=n; num++){
            for(int j = 1; j*j <= num; j++){
                int square = j*j;
                dp[num] = min(dp[num], 1+dp[num-square]);
            }
        }
        for(auto i:dp){
            cout << i <<endl;
        }
        return dp[n];
    }
    
    // int getSquares(int n, unordered_map<int, int> &memo){
    //     if(memo[n]) return memo[n];
    //     if(n == 1 || n == 0) return n;
    //     cout << n << endl;
    //     int minCount = INT_MAX;
    //     for(int i = 1; i <= floor(sqrt(n)); i++){
    //         int lastCount = getSquares(n-(i*i), memo);
    //         minCount = min(minCount, lastCount);
    //     }
    //     memo[n] = 1+minCount;
    //     return 1 + minCount;
    // }
};