//Ford-Fulkerson
//Find the Ford-Fulkerson Algorithm for Maximum Flow
#include <iostream>
#include <queue>
#include <limits.h>
#include <string.h>
using namespace std;
#define V 6

bool search(int rGraph[V][V], int s, int t, int parent[]) {
  bool done[V];
  memset(done, 0, sizeof(done));

  queue<int> q;
  q.push(s);
  done[s] = true;
  parent[s] = -1;

  while (!q.empty()) {
    int u = q.front();
    q.pop();

    for (int v = 0; v < V; v++) {
      if (done[v] == false && rGraph[u][v] > 0) {
        q.push(v);
        parent[v] = u;
        done[v] = true;
      }
    }
  }

  return (done[t] == true);
}

int ford_f(int graph[V][V], int s, int t) {
  int u, v;

  int rGraph[V][V];
  for (u = 0; u < V; u++)
    for (v = 0; v < V; v++)
      rGraph[u][v] = graph[u][v];

  int parent[V];
  int max_flow = 0;

  while (search(rGraph, s, t, parent)) {
    int path_flow = INT_MAX;
    for (v = t; v != s; v = parent[v]) {
      u = parent[v];
      path_flow = min(path_flow, rGraph[u][v]);
    }

    for (v = t; v != s; v = parent[v]) {
      u = parent[v];
      rGraph[u][v] -= path_flow;
      rGraph[v][u] += path_flow;
    }

    max_flow += path_flow;
  }

  return max_flow;
}

int main() {
  int graph[V][V] = {{0, 8, 0, 0, 3, 0},
             {0, 0, 9, 0, 0, 0},
             {0, 0, 0, 0, 7, 2},
             {0, 0, 0, 0, 0, 5},
             {0, 0, 7, 4, 0, 0},
             {0, 0, 0, 0, 0, 0}};

  cout << "Maximum Flow: " << ford_f(graph, 0, 5) << endl;
}
