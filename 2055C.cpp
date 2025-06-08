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
	string s; cin >> s;
	ll terrain[n][m];
	FOR(i, n){
		FOR(j, m){
			cin >> terrain[i][j];
		}
	}

	int x(0), y(0);
	FOR(i, s.size()){
		char c = s[i];
		if(c=='D'){
			ll temp = 0;
			FOR(j, m) temp+=terrain[x][j];
			terrain[x][y] = -temp;
			x++;
		}else{
			ll temp = 0;
			FOR(j, n) temp+=terrain[j][y];
			terrain[x][y] = -temp;
			y++;
		}
	}

	ll finalsum(0);
	FOR(i, m) finalsum+=terrain[n-1][i];
	terrain[n-1][m-1] = -finalsum;

	FOR(i, n){
		FOR(j, m){
			cout << terrain[i][j] << (j==m-1 ? "\n" : " ");
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