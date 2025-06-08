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
	vector<vc> lab(n, vc(m));	
	vector<vi> visited(n, vi(m, 0));

	FOR(i, n){
		FOR(j, m){
			cin >> lab[i][j];
			if(lab[i][j] == '#'){
				visited[i][j] = 1;
			}
		}
	}

	int jumps = 0;	

	FOR(i, n){
		FOR(j, m){
			if(visited[i][j]) continue;

			pi start;
			start.first = i;
			start.second = j;

			jumps++;

			queue<pi> q;
			q.push(start);			
			visited[i][j] = 1;

			int dx[] = {-1, 1, 0, 0};
			int dy[] = {0, 0, -1, 1};

			while(!q.empty()){
				pi s = q.front();
				q.pop();

				FOR(k, 4){
					int nx = s.first + dx[k];
					int ny = s.second + dy[k];

					if(nx >= 0 && nx < n && ny >= 0 && ny < m && !visited[nx][ny]){
						visited[nx][ny] = 1;
						pi temp;
						temp.first = nx; temp.second = ny;
						q.push(temp);
					}
				}
			}
		}
	}

	cout << jumps;

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