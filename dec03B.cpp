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
		int a, b; cin >> a >> b; a--; b--;
		adjs[a].PB(b);
		adjs[b].PB(a);
	}

	vector<bool> visited(n, false);
	vector<int> node_mark(n);

	FOR(i, n){
		if(visited[i]) continue;

		visited[i] = true;
		queue<int> q;
		q.push(i);
		node_mark[i] = 1;
		int mark = 1;

		while(!q.empty()){
			int s = q.front();
			q.pop();
			visited[s] = true;

			for(int c: adjs[s]){
				if(visited[c]){
					if(node_mark[c] == node_mark[s]){
						cout << "IMPOSSIBLE";
						return;
					}
				}else{
					if(node_mark[s] == 1){
						mark = 0;
					}
					else{
						mark = 1;
					}
					visited[c] = true;
					q.push(c);	
					node_mark[c] = mark;
				}
			}
		}	
	}


	for(int x: node_mark){
		if(!x) cout << "2 ";
		else cout << "1 ";
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