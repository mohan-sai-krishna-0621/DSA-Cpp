#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

int main() {
    int vertices = 5;

    vector<pair<int, int>> adj[5];

    // Weighted undirected graph
    adj[0].push_back({1, 2});
    adj[1].push_back({0, 2});

    adj[0].push_back({2, 4});
    adj[2].push_back({0, 4});

    adj[1].push_back({2, 1});
    adj[2].push_back({1, 1});

    adj[1].push_back({3, 7});
    adj[3].push_back({1, 7});

    adj[2].push_back({4, 3});
    adj[4].push_back({2, 3});

    vector<int> dist(vertices, INT_MAX);

    priority_queue<
        pair<int, int>,
        vector<pair<int, int>>,
        greater<pair<int, int>>
    > pq;

    dist[0] = 0;
    pq.push({0, 0});

    while (!pq.empty()) {
        int distance = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        if (distance != dist[node])
            continue;

        for (auto edge : adj[node]) {
            int neighbor = edge.first;
            int weight = edge.second;

            if (dist[node] + weight < dist[neighbor]) {
                dist[neighbor] = dist[node] + weight;
                pq.push({dist[neighbor], neighbor});
            }
        }
    }

    cout << "Shortest distances from node 0:\n";

    for (int i = 0; i < vertices; i++) {
        cout << "Node " << i << ": " << dist[i] << endl;
    }

    return 0;
}
