class Solution {
private:
    void dfs(int node, vector<int> adjList[], int vis[]){
        vis[node] = 1;
        for(auto it: adjList[node]){
            if(!vis[it]){
                dfs(it, adjList, vis);
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& adj) {
        int n = adj.size();
        vector<int> adjList[n];

        // to change adjacency matrix to list
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(adj[i][j] == 1 && i != j){
                    adjList[i].push_back(j);
                    adjList[j].push_back(i);
                }
            }
        }

        int vis[n];
        memset(vis, 0, sizeof(vis));  HERE

        int c = 0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                c++;
                dfs(i, adjList, vis);
            }
        }
        return c;
    }
};