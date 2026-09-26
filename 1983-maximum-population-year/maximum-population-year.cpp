class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        int n=logs.size();
        map<int, int> mp;
        for(int i=0;i<n;i++){
            mp[logs[i][0]]++;
            mp[logs[i][1]]--;
        }
        int maxi=INT_MIN;
        int delta=0;
        for(auto it: mp){
            delta+=it.second;
            maxi=max(maxi, delta);
        }
        int ans=0;
        for(auto it: mp){
            delta+=it.second;
            if(delta==maxi){
                ans=it.first;
                break;
            }
        } return ans;
    }
};