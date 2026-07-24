class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        int n = s.size();
        string t;
        vector<char> rest;
        int county = 0;
        int countx = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == y) county++;
            else if (s[i] == x) countx++;
            else rest.push_back(s[i]);
        }
        t.append(county, y);
        t.append(rest.begin(), rest.end());
        t.append(countx, x);
        return t;
    }
};