#include <iostream>
#include <vector>
#include <climits> // For INT_MAX
using namespace std;

class Graph {
private:
    int V; // Number of vertices
    vector<vector<int> > adjMatrix;
public:
    Graph(int vertices) : V(vertices) {
        adjMatrix.resize(V, vector<int>(V, 0));
    }
    void addEdge(int u, int v, int weight) {
        adjMatrix[u][v] = weight;
        adjMatrix[v][u] = weight; // Assuming undirected graph
    }
    int minDistance(vector<int>& dist, vector<bool>& sptSet) {
        int minDist = INT_MAX, minIndex;

        for (int v = 0; v < V; ++v) {
            if (!sptSet[v] && dist[v] <= minDist) {
                minDist = dist[v];
                minIndex = v;
            }
        }
        return minIndex;
    }
    void printSolution(vector<int>& dist) {
        cout << "Vertex \t Distance from Source\n";
        for (int i = 0; i < V; ++i) {
            cout << i << " \t " << dist[i] << endl;
        }
    }
    void dijkstra(int src) {
        vector<int> dist(V, INT_MAX); 
        vector<bool> sptSet(V, false); 
        dist[src] = 0; 
        for (int count = 0; count < V - 1; ++count) {
            int u = minDistance(dist, sptSet);
            sptSet[u] = true;
            for (int v = 0; v < V; ++v) {
                if (!sptSet[v] && adjMatrix[u][v] && dist[u] != INT_MAX && dist[u] + adjMatrix[u][v] < dist[v]) {
                    dist[v] = dist[u] + adjMatrix[u][v];
                }
            }
        }
        printSolution(dist);
    }
};
int main() {
    Graph g(9);
    g.addEdge(0, 1, 4);
    g.addEdge(0, 7, 8);
    g.addEdge(1, 2, 8);
    g.addEdge(1, 7, 11);
    g.addEdge(2, 3, 7);
    g.addEdge(2, 8, 2);
    g.addEdge(2, 5, 4);
    g.addEdge(3, 4, 9);
    g.addEdge(3, 5, 14);
    g.addEdge(4, 5, 10);
    g.addEdge(5, 6, 2);
    g.addEdge(6, 7, 1);
    g.addEdge(6, 8, 6);
    g.addEdge(7, 8, 7);
    int src = 0;
    cout << "Shortest distances from vertex " << src << ":\n";
    g.dijkstra(src);
    return 0;
}

