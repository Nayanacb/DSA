class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size();
        int m = t.size();

        if (m > n)
            return "";
        if (t == s)
            return s;
        else {
            int l = 0;
            int r = 0;
            unordered_map<char, int> mp;
            for (int i = 0; i < m; i++) {
                mp[t[i]]++;
            }
            int k = mp.size();
            int cnt = 0;
            int mini = INT_MAX;
            bool all = false;
            unordered_map<char, int> mp1;
            int start = 0;
            while (r < n) {

                if (mp.count(s[r])) {
                    mp1[s[r]]++;

                    if (mp1[s[r]] <= mp[s[r]])
                        cnt++;
                }

                while (cnt == m) {
                    if (r - l + 1 < mini) {
                        mini = r - l + 1;
                        start = l;
                    }
                    if (mp.count(s[l])) {
                        if (mp1[s[l]] <= mp[s[l]])
                            cnt--;
                        mp1[s[l]]--;
                    }

                    l++;
                }

                r++;
            }
            if (mini == INT_MAX)
                return "";
            return s.substr(start, mini);
        }
    }
};