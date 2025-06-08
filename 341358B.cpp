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
	vector<vi> ath(n, vi(5));
	FOR(i, n){
		FOR(j, 5){
			int x;
			cin >> x; x--;
			ath[i][j] = x;
		}
	}

	int gold = 0;
	FOR(i, n){
		int w(0);
		FOR(j, 5){
			if(ath[i][j] < ath[gold][j]) w++;
		}

		if(w > 2){
			gold = i;
		}
	}	

	int possible(1);
	FOR(i, n){
		if(i == gold) continue;
		int w(0);
		FOR(j, 5){
			if(ath[i][j] > ath[gold][j]) w++;
		}

		if(w < 3){
			possible = 0;
			break;
		}
	}

	if(possible){
		cout << gold + 1;
	}else{
		cout << -1;
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