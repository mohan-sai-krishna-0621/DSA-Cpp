#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Problem 1: Graph Representation
void displayGraph(vector<int> adj[], int vertices) {
    cout << "Graph Representation:\n";

    for (int i = 0; i < vertices; i++) {
        cout << i << " -> ";

        for (int node : adj[i]) {
            cout << node << " ";
        }

        cout << endl;
    }
}

// Problem 2: Breadth First Search (BFS)
void BFS(vector<int> adj[], int vertices, int start) {
    vector<bool> visited(vertices, false);
    queue<int> q;

    visited[start] = true;
    q.push(start);

    cout << "BFS Traversal: ";

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        cout << node << " ";

        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}

int main() {
    int vertices = 5;
    vector<int> adj[5];

    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[1].push_back(3);
    adj[2].push_back(4);

    displayGraph(adj, vertices);
    BFS(adj, vertices, 0);

    return 0;
}
