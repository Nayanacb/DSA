class Solution {
public:
    long long countSubarrays(vector<int>& nums, int mink, int maxk) {
        int l = 0;
        int r = 0;
        long long cnt = 0;
        int n = nums.size();

        while (r < n) {
            if (nums[r] <= maxk && nums[r] >= mink) {
                cnt += r - l + 1;

            } else {

                l = r + 1;
            }
            r++;
        }
        return cnt;
    }
};