class Solution {
private:
    void dfs(int node, vector<vector<int>> &adjList, vector<int> &vis){
        vis[node] = 1;
        for(auto it : adjList[node]){
            if(!vis[it]){
                dfs(it, adjList, vis);
            }
        }
    }

public:
    int findCircleNum(vector<vector<int>>& adj) {
        int n = adj.size();
        vector<vector<int>> adjList(n);

        // Convert adjacency matrix to adjacency list
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(adj[i][j] == 1 && i != j){
                    adjList[i].push_back(j);
                }
            }
        }

        vector<int> vis(n, 0);
        int c = 0;

        for(int i = 0; i < n; i++){
            if(!vis[i]){
                c++;
                dfs(i, adjList, vis);
            }
        }

        return c;
    }
};