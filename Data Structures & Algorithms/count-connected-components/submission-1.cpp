class Solution {
public:
    void dfs(int node,vector<vector<int>>& adj,vector<bool>& visited){
        visited[node]=true;
        for(int x:adj[node]){
            if(!visited[x]){
                dfs(x,adj,visited);
            }
        }
    }
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<bool> visited(n,false);
        vector<vector<int>> adj(n);
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        int ans=0;
        for(int i=0;i<visited.size();i++){
            if(!visited[i]){
                dfs(i,adj,visited);
                ans++;
            }
        }
        return ans;

    }
};
