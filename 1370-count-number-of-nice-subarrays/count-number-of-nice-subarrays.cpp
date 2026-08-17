class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int r=0;
        int n=nums.size();
        int l=0;
        int cnta=0;
        int odds=0;
        while(r<n){
            if(nums[r]%2==1) odds++;
            
            while(odds>k){
                if(nums[l]%2==1) odds--;
                l++;
            }
            if(odds<=k) cnta+=r-l+1;
            r++;
        } 
        r=0;
        l=0;
        int cntb=0;
        int odds2=0;
        while(r<n){
            if(nums[r]%2==1) odds2++;
            
            while(odds2>k-1){
                if(nums[l]%2==1) odds2--;
                l++;
            }
            if(odds2<=k-1) cntb+=r-l+1;
            r++;
        } 
        return cnta-cntb;
    }
};