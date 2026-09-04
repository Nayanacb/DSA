class Solution {
public:
    using vb=vector<bool>;
    using vvb=vector<vb>;
    using vvvb=vector<vvb>;
    using vvvvb=vector<vvvb>;
    vector<int> delrow={-1, 0,1,0 };
    vector<int> delcol={0,-1,0,1}; 
    struct state{
        int row;
        int col;
        int energyleft;
        int collectedmask;
    };
    int minMoves(vector<string>& classroom, int energy) {
        int n=classroom.size();
        int m=classroom[0].size();
        int maxen=energy;
        int litterbit[20][20];
        int littercount=0;
        int startr=0;
        int startc=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(classroom[i][j]=='S'){
                     litterbit[i][j]=-1;
                     startr=i;
                     startc=j;
                }
                else if(classroom[i][j]=='L'){
                    litterbit[i][j]=littercount;
                    littercount++;
                }
            }
        }
            int allcollected=(1<<littercount) -1;
            if(littercount==0) return 0;
            vvvvb visited(n, vvvb(m, vvb(maxen+1, vb(1<<littercount,false ))));  
            queue<state> q;
            q.push({startr, startc, maxen, 0});
            visited[startr][startc][maxen][0]=true;
            int moves=0;
            while(!q.empty()){
                 int currsize=q.size();
                 while(currsize--){
                    state curr=q.front();
                    q.pop();
                    if(curr.collectedmask==allcollected){
                        return moves;
                    }
                    if(curr.energyleft==0) continue;
                    for(int i=0;i<4;i++){
                        int nrow=curr.row+delrow[i];
                        int ncol=curr.col+delcol[i];
                        if(nrow>=0 &&nrow<n && ncol>=0 && ncol<m){
                            {
                                char cell=classroom[nrow][ncol];
                                if(cell=='X') continue;
                                int nextenergy=curr.energyleft-1;
                                int nextcollectedmask=curr.collectedmask;
                                if(cell=='R'){
                                    nextenergy=maxen;
                                }
                                else if(cell=='L'){
                                    nextcollectedmask |= (1 << litterbit[nrow][ncol]);
                                }
                                if(!visited[nrow][ncol][nextenergy][nextcollectedmask]){
                                    visited[nrow][ncol][nextenergy][nextcollectedmask]=true;
                                    q.push({nrow, ncol, nextenergy, nextcollectedmask});
                                }
                            }
                        } 
                        
                    } 
                 } moves++;
            } return -1;
        

    }
};