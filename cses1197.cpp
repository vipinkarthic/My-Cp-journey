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
	int n, m; cin >> n >> m;
	vector<vector<node>> edges(n);
	FOR(i, m){
		int a, b, c; cin >> a >> b >> c; a--; b--;
		edges[a].PB(node(b, c));
	}	
 
	vector<ll> distance(n, -1e18);
	vector<ll> parents(n, -1);
	distance[0] = 0;
	int last_updated_cycle_node = -1;
	FOR(i, n){
		FOR(j, n){
			if(distance[j] == -1e18) continue;
			for(node c: edges[j]){
				if(distance[j] + c.weight < distance[c.value]){
					distance[c.value] = distance[j]+c.weight;
					parents[c.value] = j;
					if(i == n-1) last_updated_cycle_node = j;
				}
			}
		}
	}
 
	if(last_updated_cycle_node==-1){
		cout << "NO";
		return;
	}
 
	FOR(i, n) last_updated_cycle_node = parents[last_updated_cycle_node];
 
	vector<ll> cycle;
	for(int x=last_updated_cycle_node;;x=parents[x]){
		cycle.PB(x);
		if(cycle.size() > 1 && x == last_updated_cycle_node) break;
	}
 
	reverse(cycle.begin(), cycle.end());
 
	cout << "YES" << endl;
	for(int x: cycle) cout << x+1 << " ";
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
