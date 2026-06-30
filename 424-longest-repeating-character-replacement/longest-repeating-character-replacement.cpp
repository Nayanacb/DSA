class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int r = 0;
        int l = 0;

        int maxi = 0;
        int maxf = 0;
        map<char, int> mp;
        while (r < n) {
            mp[s[r]]++;
            for (auto& it : mp) {
                maxf = max(maxf, it.second);
            }

            if (r - l + 1 - maxf > k) {
                mp[s[l]]--;
                if (mp[s[l]] == 0)
                    mp.erase(s[l]);
                l++;
            }
            if (r - l + 1 - maxf <= k)
                r++;
        } return r-l+1-1;
    }
};