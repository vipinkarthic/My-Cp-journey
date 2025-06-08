#include<bits/stdc++.h>
using namespace std; 
#define mod (1000000007)
#define INF INT_MAX
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++) 
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++) 
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--) 
typedef long long int ll; 
typedef vector<ll> vi; 
typedef pair<int, int> pi; 
typedef vector<string> vs;
typedef vector<char> vc;
#define PB push_back 
#define POB pop_back 
#define MP make_pair 

void solve(){
	int n; cin >> n;
	vi dang(n), parent(n); 
	vector<vi> edges(n);
	FOR(i, n) cin >> dang[i];
	FOR(i, n-1){
		int u, v; cin >> u >> v; u--; v--;
		edges[u].PB(v);
		edges[v].PB(u);
	}

	queue<ll> q;
	parent[0] = 0;

	vector<vi> ans(2, vi(n));
	ans[0][0] = dang[0];
	ans[1][0] = -dang[0];

	q.push(0);

	while(!q.empty()){
		int s = q.front();
		q.pop();

		for(int c: edges[s]){
			if(c == parent[s]) continue;;
			parent[c] = s;
			ans[0][c] = max((ll)dang[c], (ll)dang[c]+ans[1][s]);
			ans[1][c] = max((ll)-dang[c], (ll)(-dang[c])+ans[0][s]);
			q.push(c);
		}
	}

	FOR(i, n) cout << ans[0][i] << " ";
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