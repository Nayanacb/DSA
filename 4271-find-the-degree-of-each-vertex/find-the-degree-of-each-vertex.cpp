class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int> ans;
        int n=matrix.size();
        int m=matrix[0].size();
        
        for(int i=0;i<n;i++){
            int k=0;
            for(int j=0;j<m;j++){
                k+=matrix[i][j];
            }
            ans.push_back(k);
        } return ans;
    }
};