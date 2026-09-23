class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size();
        int total=0;
        for(int i=0;i<n;i++){
            total+=nums[i];
        }
        
        int target=total-x;
        if(target==0) return n;
        if(target<0) return -1;
        int l=0;
        int r=0;
        int sum=0;
        int maxi=-1;
        while(r<n){
            sum+=nums[r];
            
            while(l<=r && sum> target){
                sum-=nums[l];
                l++;
            }
            if(sum==target){
                maxi=max(maxi, r-l+1);
            }
            
            r++;
        }
        return maxi==-1? -1: n-maxi;
    }
};