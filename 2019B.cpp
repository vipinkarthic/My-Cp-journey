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
	ll n, q; cin >> n >> q;
	ll coords[n];
	FOR(i, n) cin >> coords[i];
	ll query[q];
	FOR(i, q) cin >> query[i];

	map<ll, ll> count;
	FORL(i, 1, n){
		ll point = (i-1) * (n-i+1) + n-i;
		count[point]++;
	}	

	FORL(i,1, n-1){
		if(coords[i] - coords[i-1] -1){
			count[(n-i)*i] += coords[i] - coords[i-1] - 1;
		}
	}

	FOR(i, q){
		cout << count[query[i]] << " ";
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