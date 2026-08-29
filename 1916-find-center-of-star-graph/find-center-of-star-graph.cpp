class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int cnt=0;
        int n=edges.size();
        int m=2;
        map<int, int>mp;
        for(int i=0;i<n;i++){
            for(int j=0;j<2;j++){
                mp[edges[i][j]]++;
            }
        }
        int maxi=INT_MIN;
        for(auto it:mp){
            if(it.second> maxi) maxi=it.first;
        } return maxi;
    }
};