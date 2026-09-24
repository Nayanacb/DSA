class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n=nums.size();
        int mini=INT_MAX;
        
        for(int i=0;i<n;i++){
            int m=nums[i];
            int sum=0;
            while(m>0){
                int r=m%10;
                sum+=r;
                m/=10;
            }
            if(sum==i){
                mini=min(mini, i);
            }
        } if(mini==INT_MAX) return -1;
        return mini;
    }
};