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

class node{
public:
	ll value;
	ll weight;

	node(int v, int w){
		value = v;
		weight = w;
	}

};

void solve(){
	ll n, m; cin >> n >> m;
	vector<vector<node>> edges(n);
	ll M = -1000000000000000000;
	FOR(i, m){
		ll a, b, x; cin >> a >> b >> x; a--; b--;
		edges[a].PB(node(b, x));
	}

	vector<ll> distance(n, M);
	distance[0] = 0;
	int cycle_found = 0;

	FOR(i, n-1){
		FOR(j, n){
			if(distance[j] == M) continue;
			for(node c: edges[j]){
				distance[c.value] = max(distance[c.value], distance[j]+c.weight);
			}
		}
	}

	int is_n_in_cycle = 0;
	vector<ll> cycle_nodes(n, 0);
	FOR(i, n){
		if(distance[i] == M) continue;
		for(node c: edges[i]){
			if(distance[c.value] < distance[i] + c.weight){
				if(i == n-1) is_n_in_cycle = true;
				cycle_nodes[i] = 1;
				cycle_found = true;
			}
		}
	}

	int is_indirectly_connected = 0;
	queue<ll> q;
	vector<ll> visited(n, 0); 
	FOR(i, n){
		if(cycle_nodes[i]){
			q.push(i);
			visited[i] = 1;
		}
	}

	while(!q.empty()){
		int s = q.front();
		q.pop();

		if(s == n-1){
			is_indirectly_connected = true;
			break;
		}

		for(node c: edges[s]){
			if(visited[c.value]) continue;
			q.push(c.value);
			visited[c.value] = true;
		}
	}

	cout << (cycle_found && (is_n_in_cycle || is_indirectly_connected) ? -1 : distance[n-1]);

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