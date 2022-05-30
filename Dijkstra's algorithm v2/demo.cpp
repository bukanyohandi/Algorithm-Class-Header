/*
    Author: Yohandi
    Date: 30/05/2022

    This is a demo for using the "dijkstra_v2.hpp" header class.
    Problem link: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_A
*/

#include <assert.h>

#include <iostream>
#include <queue>
#include <set>
#include <utility>
#include <vector>
using namespace std;

template <class T>
class Dijkstra_v2 {
 public:
  Dijkstra_v2() {
    __n = 0;
    infIsSet = false;
    zeroIsSet = false;
  }
  Dijkstra_v2(int n) {
    assert(n >= 0);

    __n = n;
    infIsSet = false;
    zeroIsSet = false;
    edges.resize(n);
  }

  void addEdge(int u, int v, T w) {
    assert(0 <= u && u < __n);
    assert(0 <= v && v < __n);

    edges[u].insert({v, w});

    return;
  }

  vector<T> distance(int source) {
    assert(infIsSet == true);
    assert(zeroIsSet == true);
    assert(0 <= source && source < __n);

    int current;
    T cost;
    vector<T> dist(__n, inf);
    priority_queue<pair<T, int>, vector<pair<T, int> >, greater<pair<T, int> > > costs;

    dist[source] = zero;
    costs.push({zero, source});
    while (!costs.empty()) {
      cost = costs.top().first;
      current = costs.top().second;
      costs.pop();

      if (cost <= dist[current]) {
        for (auto edge : edges[current]) {
          if (dist[edge.first] > dist[current] + edge.second) {
            dist[edge.first] = dist[current] + edge.second;
            costs.push({dist[edge.first], edge.first});
          }
        }
      }
    }

    return dist;
  }

  T getInfinite() {
    return inf;
  }

  T getZero() {
    return zero;
  }

  void removeEdge(int u, int v, T w) {
    assert(0 <= u && u < __n);
    assert(0 <= v && v < __n);

    edges[u].erase({v, w});

    return;
  }

  void resize(int n) {
    assert(n >= 0);

    __n = n;
    edges.resize(n);

    return;
  }

  void setInfinite(T val) {
    inf = val;
    infIsSet = true;

    return;
  }

  void setZero(T val) {
    zero = val;
    zeroIsSet = true;

    return;
  }

  int size() {
    return __n;
  }

 private:
  bool infIsSet, zeroIsSet;
  int __n;
  T zero, inf;
  vector<set<pair<int, T> > > edges;
};

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n, m, u, v, source;
  long long w;
  vector<long long> ans;

  cin >> n >> m >> source;
  Dijkstra_v2<long long> graph(n);

  for (int i = 0; i < m; ++i) {
    cin >> u >> v >> w;
    graph.addEdge(u, v, w);
  }

  graph.setInfinite(5000000000);
  graph.setZero(0);
  ans = graph.distance(source);

  for (int i = 0; i < n; ++i) {
    if (ans[i] == graph.getInfinite()) {
      cout << "INF" << endl;
    } else {
      cout << ans[i] << endl;
    }
  }
}