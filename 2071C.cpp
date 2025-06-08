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
	ll n, s, e; cin >> n >> s >> e;
	s--; e--;
	vector<vi> edges(n);
	FOR(i, n-1){
		int u, v; cin >> u >> v; u--; v--;
		edges[u].PB(v);
		edges[v].PB(u);
	}


	vi visited(n, 0);
	queue<pi> q;
	map<int, vi, greater<int>> dist;

	q.push(MP(e, 0));
	visited[e] = 1;
	dist[0].PB(e);

	while(!q.empty()){
		pi p = q.front();
		int d = p.first;
		q.pop();

		for(int c: edges[d]){
			if(visited[c]) continue;
			visited[c] = 1;
			q.push(MP(c, p.second+1));
			dist[p.second+1].PB(c);
		}
	}

	for(pair<int, vi> p: dist){
		for(int x: p.second){
			cout << x+1 << " ";
		}
	}
}

int main(){
	ios::sync_with_stdio(0); 
	cin.tie(0);

	int t;
	cin >> t;
	while(t--){
		solve();
		cout << "\n";
	}

	return 0;
}