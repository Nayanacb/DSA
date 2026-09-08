class Solution {
public:
    bool canachieve(vector<int>& nums, int k, int mid){
        int cnt=1;
        int sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(sum+nums[i]>mid){
                cnt++;
                sum=nums[i];
            }
            else{
                sum+=nums[i];
            } 
        }return cnt<=k;
    }
    int splitArray(vector<int>& nums, int k) {
        int low=*max_element(nums.begin(), nums.end());
        int high=accumulate(nums.begin(), nums.end(), 0);
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(canachieve(nums, k, mid)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        } return ans;
    }
};