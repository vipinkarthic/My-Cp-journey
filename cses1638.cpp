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
	int n; cin >> n;
	vector<vc> grid(n, vc(n));
	vector<vi> paths(n, vi(n, 0));
	FOR(i, n){
		FOR(j, n){
			cin >> grid[i][j];
		}
	}	

	FOR(i, n){
		if(grid[i][0] == '*') break;
		paths[i][0] = 1;	
	}

	FOR(i, n){
		if(grid[0][i] == '*') break;
		paths[0][i] = 1;	
	}

	FORL(i, 1, n-1){
		FORL(j, 1, n-1){
			if(grid[i][j] == '*') continue;
			else{
				paths[i][j] = (paths[i-1][j]+paths[i][j-1])%mod;
			}
		}
	}
	cout << paths[n-1][n-1];

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