class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        if(grid[0][0]==1 || grid[n-1][n-1]==1) return -1;
        vector<vector<int>> directions={{1, 1}, {-1, -1},{0, 1}, {0, -1}, {1, 0} , {-1, 0}, {1, -1}, {-1, 1}};
        int cnt=0;
        queue<pair<int, pair<int, int>>> q;
        q.push({1, {0,0}});
        vector<vector<int>> dis(n, vector<int> (n, 1e9));
       
        dis[0][0]=1;
        if(n==1) return 1;
        while(!q.empty()){
            int row=q.front().second.first;
            int col=q.front().second.second;
            int dist=q.front().first;
            for(int i=0;i<8;i++){
                int row1=row+directions[i][0];
                int col1=col+directions[i][1];
                
                if(row1>=0 && row1<n && col1>=0 && col1<n &&  dist+1<dis[row1][col1] && grid[row1][col1]==0 ){
                    dis[row1][col1]=dist+1;
                    if(row1==n-1 && col1==n-1) return dist+1;
                    q.push({dist+1,{row1, col1}});
                    
                }
               
            }
            
            q.pop();

        }
        return -1;

        }
    
};