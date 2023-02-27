#include <iostream>
#include <vector>
#include <queue>
#include "bfs.h"

using namespace std;

int main() {
    vector<vector<int>> graph;
    vector<bool> visited;
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
    bfs(0, graph, visited);
}
