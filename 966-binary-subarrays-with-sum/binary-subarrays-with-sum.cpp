class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n=nums.size();
        int l=0;
        int r=0;
        int sum=0;
        int cntb=0;
        int cnts=0;
        while(r<n){
            sum+=nums[r];
            while(l<=r &&sum>goal){
                sum-=nums[l];
                l++;
            }
            if(sum<=goal){
                cntb+=r-l+1;
            }
            r++;
            
        } 
        int goaln=goal-1;
        if(goaln<0) return cntb;
        l=0;
        r=0;
        sum=0;

        while(r<n){
            sum+=nums[r];
            while(sum>goaln){
                sum-=nums[l];
                l++;
            }
            if(sum<=goaln){
                cnts+=r-l+1;
            }
            r++;
            
        } return cntb-cnts;

        
    }
};