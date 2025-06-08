#include<bits/stdc++.h>
using namespace std; 
#define mod (1000000007)
#define INF INT_MAX
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++) 
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++) 
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--) 
typedef long long int ll; 
typedef vector<int> vi; 
typedef pair<int, int> pi; 
typedef vector<string> vs;
typedef vector<char> vc;
#define PB push_back 
#define POB pop_back 
#define MP make_pair 

void solve(){
	ll n, m, q; cin >> n >> m >> q;
    ll NUM = 1000000000000000000;
	vector<vector<pi>> edges(n);
	vector<vector<ll>> adj(n, vector<ll>(n, NUM));
	FOR(i, m){
		ll a, b, c; cin >> a >> b >> c;a--; b--;
		edges[a].PB({b, c});
		edges[b].PB({a, c});
		adj[a][b] = min(adj[a][b], c);
		adj[b][a] = min(adj[a][b], c);
	}

	ll distance[n][n];
	FOR(i, n){
		FOR(j, n){
			if( i == j ) distance[i][j] = 0;
			else if(adj[i][j] != NUM) distance[i][j] = adj[i][j];
			else distance[i][j] = NUM; 
		}	
	}

	FOR(k, n){
		FOR(i, n){
			FOR(j, n){
				distance[i][j] = min(distance[i][j], distance[i][k] + distance[k][j]);
			}
		}
	}

	while(q--){
		ll a, b; cin >> a >> b; a--; b--;
		if(distance[a][b] >= NUM){
			cout << -1 << endl;
			continue;
		}
		cout << distance[a][b] << endl;
	}
}

int main(){
	ios::sync_with_stdio(0); 
	cin.tie(0);

	int t = 1;
	while(t--){
		solve();
		cout << "\n";
	}

	return 0;
}