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
	int field[n][n];

	FOR(i, n){
		string s; cin >> s;
		FOR(j, n){
			field[i][j] = s[j] - '0';
		}
	}


	FOR(i, n-1){
		FOR(j, n-1){
			if(field[i][j])
				if(!field[i+1][j] && !field[i][j+1]){
					cout << "NO";
					return;
			}
		}
	}

	cout << "YES";
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