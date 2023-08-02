//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 107;
int adj_mat[N][N];
int main() {
	int n; cin >> n;
	for(int i = 1; i <= n; i++) {
		int u, x; cin >> u >> x;
		while(x--) {
			int v; cin >> v;
			adj_mat[u][v] = 1;
		}
	}
	for(int u = 1; u <= n; u++) {
		for(int v = 1; v <= n; v++) {
			cout << adj_mat[u][v];
			if(v != n) cout << " ";
		}
		cout << "\n";
	}
  return 0;
}

// https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_11_A 
// https://prnt.sc/ifHc2xwSsMDz