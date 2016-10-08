// https://www.quora.com/What-is-the-most-simple-efficient-C++-code-for-Dijkstras-shortest-path-algorithm

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <limits>
#include <cstring>
using namespace std;

#define MAX_NODES 10000
#define MAX_FISH  10001

int shops[MAX_NODES];
int shortest_path[MAX_NODES][MAX_FISH];
vector<pair<int,int>> graph [MAX_NODES];
set<pair<int, pair<int,int>>> queue;

void InQueue(int node, int mask, int cost) {
    if (shortest_path[node][mask] <= cost) { return;}
    pair<int, pair<int,int>> current = make_pair(shortest_path[node][mask], make_pair(node, mask));
    auto it = queue.find(current);
    if (it != queue.end()) { queue.erase(it); }
    shortest_path[node][mask] = cost;
    current.first = cost;
    queue.insert(current);
}

void Dijkstra(int src) {
    InQueue(src, shops[src], 0);
    while (!queue.empty()) {
        int cost = queue.begin()->first;
        int current_shops = queue.begin()->second.second;
        src = queue.begin()->second.first;
        queue.erase(queue.begin());
        for (const auto& neighbour: graph[src]) {
            InQueue(neighbour.first, current_shops | shops[neighbour.first], cost + neighbour.second);
        }
    }
}

void Init() {
    memset(shops, 0, sizeof(shops));
    for (int i = 0; i < MAX_NODES; i++) {
        for (int j = 0; j < MAX_FISH; j++) {
            shortest_path[i][j] = numeric_limits<int>::max() / 2;
        }
    }
}

int main() {
    int n, m, k, t, c_fish_type, from, to, cost;
    cin >> n >> m >> k;
    Init();
    for (int i = 1; i <= n; i++) {
        cin >> t;
        while (t--) {
            cin >> c_fish_type;
            shops[i] |= (1 << (c_fish_type - 1));
        }
    }
    while (m--) {
        cin >> from >> to >> cost;
        graph[from].emplace_back(to, cost);
        graph[to].emplace_back(from, cost);
    }

    Dijkstra(1);

    int best_time = numeric_limits<int>::max();
    for (int i = 0; i < (1 << k) ; i++) {
       for (int j = i; j < (1 << k); j++) {
           if ((i | j) == (1 << k) - 1) {
               best_time = min (best_time, max(shortest_path[n][i], shortest_path[n][j]));
           }
       }
    }
    cout << best_time << endl;
    return 0;
}
