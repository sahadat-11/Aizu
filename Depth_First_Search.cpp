//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
const int N = 105;
vector<int> g[N];
int discover[N], finis[N];
int timer;
bool vis[N];

void dfs(int u, int p) {
	vis[u] = true;
	discover[u] = ++timer;
	for(auto v : g[u]) {
		if(!vis[v]) {
			dfs(v, u);
		}
	}
	finis[u] = ++timer;
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  for(int i = 1; i <= n; i++) {
  	int u, k; cin >> u >> k;
  	while(k--) {
      int v; cin >> v;
      g[u].push_back(v);
  	}
  }
  for(int i = 1; i <= n; i++) {
  	sort(g[i].begin(), g[i].end());
  }
  for(int i = 1; i <= n; i++) {
    if(!vis[i]) {
      dfs(i, 0);
    }
  }
  for(int i = 1; i <= n; i++) {
  	cout << i << " " << discover[i] << " " << finis[i] << endl;
  }
  return 0;
}


// https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_11_B 
// https://prnt.sc/er4CWVjIgXka
// https://prnt.sc/SNLj0awV2pfm
