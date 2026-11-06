#include <iostream>
#include <vector>
using namespace std;

// Problem 1: Depth First Search (DFS)
void DFS(int node, vector<int> adj[],
         vector<bool>& visited) {

    visited[node] = true;
    cout << node << " ";

    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            DFS(neighbor, adj, visited);
        }
    }
}

// Problem 2: Cycle Detection in Undirected Graph
bool hasCycle(int node, int parent,
              vector<int> adj[],
              vector<bool>& visited) {

    visited[node] = true;

    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            if (hasCycle(neighbor, node, adj, visited))
                return true;
        }
        else if (neighbor != parent) {
            return true;
        }
    }

    return false;
}

int main() {
    int vertices = 5;
    vector<int> adj[5];

    adj[0].push_back(1);
    adj[1].push_back(0);

    adj[0].push_back(2);
    adj[2].push_back(0);

    adj[1].push_back(3);
    adj[3].push_back(1);

    adj[2].push_back(4);
    adj[4].push_back(2);

    vector<bool> visited(vertices, false);

    cout << "DFS Traversal: ";
    DFS(0, adj, visited);

    fill(visited.begin(), visited.end(), false);

    bool cycle = false;

    for (int i = 0; i < vertices; i++) {
        if (!visited[i]) {
            if (hasCycle(i, -1, adj, visited)) {
                cycle = true;
                break;
            }
        }
    }

    cout << "\nCycle Detected: "
         << (cycle ? "Yes" : "No");

    return 0;
}
