class Solution {
public:
    int fxn(vector<int>&dp, int n){
        if(n<=2) return n;
        if(dp[n]!=-1) return dp[n];
        return dp[n]=fxn(dp, n-1)+ fxn(dp, n-2);
    }
    int climbStairs(int n) {
        vector<int> dp(n+1, -1);
        return fxn(dp, n);
    }
};