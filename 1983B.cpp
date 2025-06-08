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
	int a[n][m];
	int b[n][m];

	FOR(i, n){
		FOR(j, m){
			char temp; cin >> temp;
			a[i][j] = temp - '0';
		}
	}

	FOR(i, n){
		FOR(j, m){
			char temp; cin >> temp;
			b[i][j] = temp - '0';
		}
	}

	bool no_moves = true;
	FOR(i, n){
		FOR(j, m){
			if(a[i][j] != b[i][j]){
				no_moves = false;
				break;
			}
		}
		if(!no_moves){
			break;
		}
	}

	if(no_moves){
		cout << "YES" << endl;
		return;
	}

	FORR(i, n-1, 1){
		FORR(j, m-1, 1){
			if(a[i][j] != b[i][j]){
				int ones_to_add = (((b[i][j] - a[i][j]) +3 )%3);
				a[i][j] = b[i][j]; a[i-1][j-1] += ones_to_add; a[i-1][j-1] %= 3;

				int sides_to_add = 0;

				if(ones_to_add == 1) sides_to_add = 2;
				if(ones_to_add == 2) sides_to_add = 1;

				a[i-1][j] += sides_to_add; a[i-1][j] %= 3;
				a[i][j-1] += sides_to_add; a[i][j-1] %= 3;
			}
		}
	}

	no_moves = true;

	FOR(i, n){
		FOR(j, m){
			if(a[i][j] != b[i][j]){
				no_moves = false;
				break;
			}
		}
		if(!no_moves){
			break;
		}
	}

	if(no_moves) cout << "YES";
	else cout << "NO";
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