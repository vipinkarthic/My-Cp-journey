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
	vector<vi> edges(n);
	FOR(i, m){
		int a, b; cin >> a >> b; a--; b--;
		edges[a].PB(b);
		edges[b].PB(a);
	}
	vi visited(n, 0);
	vi parent(n, -1);
	bool cycle_found = false;
	int cs(-1), ce(-1);
	FOR(i, n){
		if(visited[i]) continue;
		stack<int> s;
		s.push(i);
		visited[i] = 1;
		while(!s.empty()){
			int node = s.top();
			s.pop();
			visited[node] = 1;
			for(int x: edges[node]){
				if(visited[x]){
					if(x != parent[node]){
						cycle_found = true;
						cs = x;
						ce = node;
						break;
					}
				}else{
					parent[x] = node;
					s.push(x);
				}
			}
			if(cycle_found) break;
		}	
		if(cycle_found) break;
	}
	if(cycle_found){
		vi cycle;
		cycle.PB(cs);
		for(int i = ce; i!=cs; i=parent[i]){
			cycle.PB(i);	
		}
		cycle.PB(cs);
		cout << cycle.size() << endl;
		for(int x: cycle) cout << ++x << " ";
		return;
	}
	cout << "IMPOSSIBLE";	
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