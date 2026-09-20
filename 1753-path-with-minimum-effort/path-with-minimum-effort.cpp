class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        priority_queue<pair<int, pair<int,int>>, vector<pair<int,pair<int, int>>>, greater<pair<int,pair<int, int>>>> pq;
        int n=heights.size();
        int m=heights[0].size();
        vector<vector<int>> dist(n, vector<int>(m, 1e9));
        dist[0][0]=0;
        vector<vector<int>> directions={{1, 0},{-1, 0},{0,1},{0,-1}};
        pq.push({0, {0, 0}});
        int mini=INT_MAX;
        while(!pq.empty()){
            auto it=pq.top();
            pq.pop();
            int diff=it.first;
            int row=it.second.first;
            int col=it.second.second;
            for(int i=0;i<4;i++){
                int nrow= row+ directions[i][0];
                int ncol=col+directions[i][1];
                if(row==n-1 && col==m-1) return diff;
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m  ){
                    int neweff=max(abs(heights[row][col]-heights[nrow][ncol] ), diff);
                    if(neweff< dist[nrow][ncol]) {
                        dist[nrow][ncol]=neweff;
                        pq.push({neweff,{nrow,ncol}});}
                    
                }
            }
        } return 0;
    }
};