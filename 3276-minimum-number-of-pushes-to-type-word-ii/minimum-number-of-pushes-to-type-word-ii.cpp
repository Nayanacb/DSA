class Solution {
public:
    int minimumPushes(string word) {
        map<char, int> hashmap;
        int maxi = INT_MIN;
        vector<int> freq;
        long long ans = 0;
        int n = word.size();
        for (int i = 0; i < n; i++) {
            hashmap[word[i]]++;
            maxi = max(hashmap[word[i]], maxi);
        }
        for (auto it : hashmap) {
            freq.push_back(it.second);
        }
        sort(freq.begin(), freq.end(), greater<int>());
        int s = freq.size();

        int round=0;
        for(int i=0;i<s;i++){
            round=i/8 +1;
            ans+=(long long)freq[i]*round;
        }
        return ans;
    }
};