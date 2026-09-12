class Solution {
public:
    bool dfs(int node, vector<vector<int>>& adj, vector<int> &vis, vector<int> &pvis, vector<int> &ans){
        
        vis[node]=1;
        pvis[node]=1;
        for(auto it: adj[node]){
            if(!vis[it]){
                if(dfs(it, adj, vis, pvis, ans)) return true;  
            } 
            else if(pvis[it]){
                return true;
            }   
        }
       pvis[node]=0;
       ans.push_back(node);
       return false;
        
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> ans;
        vector<vector<int>> adj(numCourses);
        int n=adj.size();
        vector<int> vis(n , 0);
        vector<int> pvis(n, 0);
      
        for(auto&p: prerequisites){
            adj[p[1]].push_back(p[0]);
        }
        for(int i=0;i<n;i++){
            if(!vis[i]){
                if(dfs(i, adj, vis, pvis, ans)) return { };
            }
        } 
        reverse(ans.begin(), ans.end());
        return ans;
    }
};