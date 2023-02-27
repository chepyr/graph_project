#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<vector<int>> graph;
vector<bool> visited;

void bfs(int start_vertex) {
    queue<int> q;
    q.push(start_vertex);
    visited[start_vertex] = true;

    while (!q.empty()) {
        int cur_vertex = q.front();
        q.pop();

        cout << cur_vertex << " ";

        for (int vertex: graph[cur_vertex]) {
            if (!visited[vertex]) {
                visited[vertex] = true;
                q.push(vertex);
            }
        }
    }
}

int main() {
    int n_vertex, n_edge;
    cin >> n_vertex >> n_edge;
    graph.resize(n_vertex);
    visited.resize(n_vertex, false);

    for (int i = 0; i < n_edge; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    bfs(0);
}
