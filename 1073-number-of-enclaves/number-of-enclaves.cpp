class Solution {
public:
    void dfs(vector<vector<int>>& grid, int row, int col){
        int n=grid.size();
        int m=grid[0].size();
        vector<int> delrow={0,-1, 0, 1};
        vector<int> delcol={-1, 0, 1, 0};
        for(int i=0;i<4;i++){
            grid[row][col]=2;
            int nrow=row+delrow[i];
            int ncol=col+delcol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]==1){
                grid[nrow][ncol]=2;
                 dfs(grid, nrow, ncol);
            }
        }
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<m;i++){
            
                if(grid[0][i]==1){
                    dfs(grid, 0, i);
                }
                 if(grid[n-1][i]==1){
                    dfs(grid, n-1, i);
                }
            
        }
        for(int i=1;i<n-1;i++){
            if(grid[i][0]==1){
                dfs(grid,i,0);
            }
            if(grid[i][m-1]==1){
                dfs(grid, i,m-1);
            }
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    cnt++;
                }
                

            }
        }
        return cnt;
    }
};