class Solution {
public:
    void dfs(int v,vector<bool>&visited,vector<vector<int>>& edges){
        int n = edges.size();
        if(visited[v]) return;
        visited[v] = true;
        for(int i=0;i<edges[v].size();i++){
            dfs(edges[v][i],visited,edges);
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<bool>visited(n,false);
        vector<vector<int>>edges(n);
        int components = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(isConnected[i][j] && i!=j){
                    edges[i].push_back(j);
                }
            }
        }
        for(int i=0;i<n;i++){
            if(!visited[i]){
                components++;
                dfs(i,visited,edges);
            }
        }
        return components;
    }
};