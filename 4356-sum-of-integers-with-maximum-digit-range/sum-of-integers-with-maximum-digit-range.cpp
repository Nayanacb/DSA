class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        
        int fmax=INT_MIN;
        int pfmax=0;
        int range=0;
        int sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int maxi=INT_MIN;
            int mini=INT_MAX;
            int p=nums[i];
            while(p>0){
            int last=p%10;
             maxi=max(maxi,last );
            mini=min(mini, last);
            p=p/10;
            
        }
        range=maxi-mini;
        pfmax=fmax;
        fmax=max(fmax, range);
        if(fmax>pfmax) {
            sum=0;
            sum+=nums[i];
        }
        else if(fmax==pfmax && range==fmax){
            sum+=nums[i];
        }
             
        } return sum;
       
    }
};