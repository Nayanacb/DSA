class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int minif=INT_MAX;
        int n=nums.size();
        int mini=INT_MAX;
        int maxi=INT_MIN;
        int ind=0;
        bool flag=false;
        vector<int> minitab(n);
        for(int i=n-1;i>=0;i--){
            
                mini=min(mini, nums[i]);
                minitab[i]=mini;
            
        }
        for(int i=0;i<n;i++){
            if(nums[i]>maxi) maxi=nums[i];
            int score=maxi-minitab[i];
            
            if(score<=k){
                flag=true;
                minif=min(minif, i);
            }
            
        } 
        if(flag) return minif;
        return -1;
    }
};