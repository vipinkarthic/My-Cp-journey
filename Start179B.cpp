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
	int n, k; cin >> n >> k;
	vi a(n), b(n);
	FOR(i, n) cin >> a[i];
	FOR(i, n) cin >> b[i];

	int moves(0), em(INF);

	FOR(i, n){
		int d = (b[i] - a[i]) % 9;
		int mind = min(d, 9-d);

		moves += mind;
		if(!d) em = min(em, 9);
		else em = min(em, max(d, 9-d) - mind);
	}

	int r = k - moves;

	if(k < moves || (r%2 && r < em)){
		cout << "NO";
		return;
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