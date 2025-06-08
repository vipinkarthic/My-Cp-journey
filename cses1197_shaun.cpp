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
	int n, m; cin >> n >> m;
	vector<tuple<int, int, int>> edges;
	FOR(i, m){
		int u, v, w; cin >> u >> v >> w; u--, v--;
		edges.PB({u, v, w});
	}

	vector<ll> distance(n, 1e18);
	vi parents(n, -1);
	distance[0] = 0;
	int l = -1;
	FOR(i, n){
		FOR(j, m){
			int u = get<0>(edges[j]);
			int v = get<1>(edges[j]);	
			int w = get<2>(edges[j]);

			if(distance[v] > distance[u]+w){
				distance[v] = distance[u]+w;
				parents[v] = u;	
				if(i==n-1){
					l = u;
					break;
				}
			}
		}
	}

	if(l == -1){
		cout << "NO";
		return;
	}

	cout << "YES" << endl;
	int x = l;
	do{
		cout << x+1 << " ";
		x = parents[x];
	}while(x!=l);
	cout << x+1;
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