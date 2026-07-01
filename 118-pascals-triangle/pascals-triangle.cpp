class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans(numRows);
        int n=1;
        for(int i=0;i<numRows;i++){
            ans[i].resize(i+1);
            for(int j=0;j<n;j++){
                if(j==0 || j==n-1) ans[i][j]=1;
                else{
                ans[i][j]=ans[i-1][j-1]+ans[i-1][j];}
            } n++;
        } return ans;
    }
};