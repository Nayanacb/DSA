class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        queue<pair<pair<int ,int>, int>> q;
        int n=image.size();
        int m=image[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        int drow[]={-1,0, +1, 0};
        int dcol[]={0, 1, 0, -1};
        int old=image[sr][sc];
        if(old==color) return image;
        image[sr][sc]=color;
        q.push({{sr, sc}, color});
        vis[sr][sc]=1;
        while(!q.empty()){
            int r=q.front().first.first;
            int c=q.front().first.second;
            int clr=q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                int nrow=drow[i]+r;
                int ncol=dcol[i]+c;
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m  && vis[nrow][ncol]!=1 && image[nrow][ncol] ==old) {
                    q.push({{nrow, ncol}, clr});
                    image[nrow][ncol]=color;
                    vis[nrow][ncol]=1;
                    }
            }
           
        }  return image;
    }
};