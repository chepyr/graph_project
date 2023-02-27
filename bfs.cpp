#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void bfs(
        int start_vertex,
        vector<vector<int>> &graph,
        vector<bool> &visited
) {
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

