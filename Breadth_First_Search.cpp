//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 107, inf = 1e9;
vector<int> adj[N];
int main() {
  int n; cin >> n;
  for(int i = 1; i <= n; i++) {
    int u, x; cin >> u >> x;
    while(x--) {
      int v; cin >> v;
      adj[u].push_back(v);
      //adj[v].push_back(u);
     }
   }
    vector<int> dis(n + 1, inf);
    queue<int> q;
    q.push(1);
    dis[1] = 0;
    while(!q.empty()) {
      int u = q.front();
      q.pop();
      for(auto v : adj[u]) {
        if(dis[u] + 1 < dis[v]) {
          dis[v] = dis[u] + 1;
          q.push(v);
        }
      }
    }
    for(int i = 1; i <= n; i++) if(dis[i] == inf) dis[i] = -1;
    for(int u = 1; u <= n; u++) cout << u << " " << dis[u] << "\n";
  return 0;
}

