class Solution {
private:
    bool check(int start, vector<vector<int>>& graph, vector<int>& color) {
        queue<int> q;
        q.push(start);
        color[start] = 0;  // assign initial color

        while (!q.empty()) {
            int node = q.front();
            q.pop();

            for (auto it : graph[node]) {
                // If not colored, assign opposite color
                if (color[it] == -1) {
                    color[it] = !color[node];
                    q.push(it);
                }
                // If already colored and same as current → not bipartite
                else if (color[it] == color[node]) {
                    return false;
                }
            }
        }
        return true;
    }

public:
    bool isBipartite(vector<vector<int>>& graph) {
        int v = graph.size();
        vector<int> color(v, -1);  // -1 means uncolored

        for (int i = 0; i < v; i++) {
            if (color[i] == -1) {
                if (!check(i, graph, color)) {
                    return false;
                }
            }
        }
        return true;
    }
};