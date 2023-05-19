class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        vector<bool> visited(graph.size());
        for (int i = 0; i < graph.size(); i++) {
            if (!visited[i]) {
                // bfs from this node
                vector<int> colors(graph.size(), -3);
                visited[i] = 1;
                queue<int> q;
                q.push(i);
                colors[i] = -1;
                while (!q.empty()) {
                    auto cur = q.front(); q.pop();
                    // go through adj
                    for (auto it : graph[cur]) {
                        if (colors[it] == colors[cur]) return false;
                        colors[it] = colors[cur] == -1 ? -2 : -1;
                        if (!visited[it]) q.push(it);
                        visited[it] = 1;
                    }
                }
            }
        }    
        return true;
    }

    
};