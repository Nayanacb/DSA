class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<vector<int>> reverse(n);
        for(int i=0;i<n;i++){
            for(auto it: graph[i]){
                reverse[it].push_back(i);
            }
        }
        vector<int> topo;
        queue<int> q;
        vector<int> indegree(n, 0);
        for(int i=0;i<n;i++){
            for(auto it: graph[i]){
                indegree[i]++;
            }
        }
        for(int i=0;i<n;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        while(!q.empty()){
            int node=q.front();
            q.pop();
            topo.push_back(node);
            for(auto it: reverse[node]){
                indegree[it]--;
                if(indegree[it]==0) q.push(it);
            }
        }
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(indegree[i]==0) ans.push_back(i);
        }
        sort(ans.begin(), ans.end());
        return ans;
        
        
        
        
    }
};