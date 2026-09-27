class Solution {
public:
    int longestSubarray(vector<int>& nums, int k) {
        int n=nums.size();
        int maxi=0;
        for(int i=0;i<n;i++){
           long long sum=0;
            for(int j=i;j<n;j++){
                 sum+=nums[j];
                int len=j-i+1;
                if(len<=maxi) continue;
               
                if(sum%k==0) {
                    maxi=max(maxi,j-i+1);
                    continue;
                };
                for(int p=i;p<=j;p++){
                    
                    int ans=sum-2*nums[p];
                    if(ans%k==0){
                        maxi=max(maxi, j-i+1);
                        break;
                    }
                }
                
            }
        } return maxi;
    }
};