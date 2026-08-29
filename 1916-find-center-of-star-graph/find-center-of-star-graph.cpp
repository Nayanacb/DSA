class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int cnt=0;
        int n=edges.size();
        int m=2;
        map<int, int>mp;
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<2;j++){
                mp[edges[i][j]]++;
                if(mp[edges[i][j]]>=2) ans=edges[i][j];
            }
        } return ans;
        
    }
};