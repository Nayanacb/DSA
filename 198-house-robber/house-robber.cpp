class Solution {
public:
    int fxn(vector<int>& nums, vector<int>& dp, int ind){
        if(ind==0) return nums[0];
        if(ind==1) return max(nums[1],nums[0]);
        if(dp[ind]!=-1) return dp[ind];
        return dp[ind]=max(fxn(nums,dp,  ind-1), fxn(nums, dp , ind-2) +nums[ind]);

    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,-1);
        return fxn(nums, dp, n-1);
    }
};