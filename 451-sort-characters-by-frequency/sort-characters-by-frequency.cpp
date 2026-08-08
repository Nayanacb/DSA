class Solution {
public:
    string frequencySort(string s) {
        map<char, int> mp;
        int n = s.size();
        string ans;
        for (int i = 0; i < n; i++) {
            mp[s[i]]++;
        }
        vector<pair<char, int>> v;
        for (auto it : mp) {
            v.push_back(it);
        }
        sort(v.begin(), v.end(),
             [](auto& a, auto& b) { return a.second > b.second; });
        for(auto it: v){
            while(it.second>0){
                ans.push_back(it.first);
                it.second--;}
        }
        return ans;
    }
};