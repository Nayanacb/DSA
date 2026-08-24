class Solution {
public:
    vector<int> primefactors(int r) {

        int i = 2;
        vector<int> temp;
        while (i * i <= r) {
            if (r % i == 0) {
                temp.push_back(i);
                while (r % i == 0)
                    r /= i;
            } 
            else i++;
        }
        if(r>1) temp.push_back(r);
        return temp;
    }
    int longestSubarray(vector<int>& nums, int k) {
        int r = 0;
        int n = nums.size();
        int l = 0;
        map<int, int> mp;
        int maxi = INT_MIN;
        int currprime = 0;
        while (r < n) {
            vector<int> t = primefactors(nums[r]);
            for (int i = 0; i < t.size(); i++) {
                mp[t[i]]++;
            }

            while (mp.size() > k) {
                vector<int> t = primefactors(nums[l]);
                for (int i = 0; i < primefactors(nums[l]).size(); i++) {
                    mp[t[i]]--;
                    if (mp[t[i]] == 0)
                        mp.erase(t[i]);
                }
                l++;
            }
            if (mp.size() <= k)
                maxi = max(maxi, r - l + 1);
            r++;
        }
        return maxi;
    }
};