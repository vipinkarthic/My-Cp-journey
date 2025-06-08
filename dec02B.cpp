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
	vector<vi> adjs(n);
	FOR(i, m){
		int x, y; cin >> x >> y; x--; y--;
		adjs[x].PB(y);
		adjs[y].PB(x);
	}

	vi new_connections;
	vector<int> visited(n, 0);

	FOR(i, n){
		if(visited[i]) continue;

		new_connections.PB(i);
		queue<int> q;

		visited[i] = 1;
		q.push(i);

		while(!q.empty()){
			int s = q.front();
			q.pop();
			visited[s] = 1;

			for(int c: adjs[s]){
				if(visited[c]) continue;
				visited[c] = 1;
				q.push(c);
			}
		}			
	}

	FOR(i, new_connections.size()) new_connections[i]++;
	int first = new_connections[0];
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