class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int r=0;
        int l=0;
        int n=nums.size();
        int count=0;
        int maxi=INT_MIN;
        map<int, int> mp;
        
        while(r<n){
            mp[nums[r]]++;
            count++;
            while(mp[nums[r]]>k){
                count--;
                mp[nums[l]]--;
                l++;
            }
            if(mp[nums[r]]<=k) maxi=max(maxi, r-l+1);
            r++;
        }
        return maxi;
    }
};