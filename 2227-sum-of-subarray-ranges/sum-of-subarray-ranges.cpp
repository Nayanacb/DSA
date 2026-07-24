class Solution {
public:
    vector<int> prevless(vector<int>& nums, bool isMin) {
        int n = nums.size();
        vector<int> pl(n, -1);
        stack<int> st;
        for (int i = 0; i < n; i++) {
            while (!st.empty() && (isMin ? nums[st.top()] >= nums[i] : nums[st.top()] <= nums[i]))
                st.pop();
            if (!st.empty()) pl[i] = st.top();
            st.push(i);
        }
        return pl;
    }

    vector<int> nextless(vector<int>& nums, bool isMin) {
        int n = nums.size();
        vector<int> nl(n, n);
        stack<int> st;
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && (isMin ? nums[st.top()] > nums[i] : nums[st.top()] < nums[i]))
                st.pop();
            if (!st.empty()) nl[i] = st.top();
            st.push(i);
        }
        return nl;
    }

    long long subArrayRanges(vector<int>& nums) {
        int n = nums.size();
        vector<int> plmin = prevless(nums, true);
        vector<int> nlmin = nextless(nums, true);
        vector<int> plmax = prevless(nums, false);
        vector<int> nlmax = nextless(nums, false);

        long long total = 0;
        for (int i = 0; i < n; i++) {
            long long cntmin = (long long)(i - plmin[i]) * (nlmin[i] - i);
            long long cntmax = (long long)(i - plmax[i]) * (nlmax[i] - i);
            total += nums[i] * cntmax - nums[i] * cntmin;
        }
        return total;
    }
};