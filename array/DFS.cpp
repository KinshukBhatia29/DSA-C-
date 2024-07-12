#include <iostream>
#define MAX 100
using namespace std;
void dfs(int graph[MAX][MAX], bool visited[MAX], int n, int node) {
    visited[node] = true;
    for (int i = 0; i < n; i++) {
        if (graph[node][i] == 1 && !visited[i]) {
            dfs(graph, visited, n, i);
        }
    }
}
int countConnectedComponents(int graph[MAX][MAX], int n) {
    bool visited[MAX] = {false};
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            dfs(graph, visited, n, i);
            count++;
        }
    }
    return count;
}
int main() {
    int n;
    cout << "Enter the number of nodes in the graph: ";
    cin >> n;
    int graph[MAX][MAX];
    cout << "Enter the adjacency matrix of the graph (0 for no connection, 1 for connection):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> graph[i][j];
        }
    }
    cout << "Number of connected components: " << countConnectedComponents(graph, n) << endl;
}

