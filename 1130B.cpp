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
	vector<vi> ckes(n+1);
	FOR(i, 2*n){
		int p; cin >> p;
		ckes[p].PB(i);
	}

	ll dist(0);
	FORL(i, 2, n) dist += abs(ckes[i][0] - ckes[i-1][0]) + abs(ckes[i][1] - ckes[i-1][1]);

	cout << (dist + ckes[1][0] + ckes[1][1]);
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