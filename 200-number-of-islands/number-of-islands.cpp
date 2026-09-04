class Solution {
public:
    void dfs(vector<vector<char>>& grid,int row, int col ){
        grid[row][col]='#';
        int n=grid.size();
        int m=grid[0].size();
        vector<int> delrow={-1, 0, 1, 0};
        vector<int> delcol={0, -1, 0, 1};
        for(int i=0;i<4;i++){
            int nrow=row+delrow[i];
            int ncol=col+delcol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]=='1'){
                dfs(grid, nrow, ncol);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                    dfs(grid, i, j);
                    cnt++;
                }
            }
        } return cnt;
    }
};