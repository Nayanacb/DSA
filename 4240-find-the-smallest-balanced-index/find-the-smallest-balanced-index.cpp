class Solution {
public:
    int smallestBalancedIndex(vector<int>& nums) {
        int n=nums.size();
        long double sum=0;
        long double prod=1;
        vector<long double> pre(nums.begin(), nums.end());
       
       
        vector<long double> suff(nums.begin(), nums.end());
        
        
        int ans=-1;
        for(int i=1;i<n;i++){
            pre[i]+=pre[i-1]; 
        }
        for(int i=n-2;i>=0;i--){
            if(suff[i]>pre[n-1]) break;
            suff[i]*=suff[i+1];
        }
        for(int i=0;i<n;i++){
            if(i!=0)  sum=pre[i-1];
            if(i!=n-1)  prod=suff[i+1];
            if(i==0)  sum=0;
            if(i==n-1)  prod=1;
            if(sum==prod) ans=i;
        } return ans;
    }
};