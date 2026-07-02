class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(3,0); 
        vector<vector<int>> fans;
        sort(nums.begin(), nums.end());
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int left=i+1;
            int right=n-1;
            while(left<right){
                int k=nums[i]+nums[right]+nums[left];
                if(k==0){
                    
                    ans[0]=nums[i];
                    ans[1]=nums[right];
                    ans[2]=nums[left];
                    fans.push_back(ans);
                    left++;
                    right--;
                    while(left< right && nums[left]==nums[left-1]){left++;}
                    while(left<right && nums[right]==nums[right+1]){right--;}
                } 
                else if(k<0) left++;
                else right--;
            }

        } return fans;
    }
};