class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi = INT_MIN;
        int maxi2=INT_MIN;
        int index = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] > maxi) {
                maxi = nums[i];
                index = i;
            }
        }
        for (int i = 0; i < n; i++) {
            if(nums[i]>maxi2 && i!=index){
                maxi2=nums[i];
            }
        }
        return (maxi-1)*(maxi2-1);
    }
};