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
	int a, b, k; cin >> a >> b >> k;
	vector<pi> edges((int)k, {0, 0});
	vi degb(a, 0), degg(b, 0);

	FOR(i, k) {
	    cin >> edges[i].first;
	    edges[i].first--;
	}
	FOR(i, k) {
	    cin >> edges[i].second;
	    edges[i].second--;
	}


	FOR(i, k){
		degb[edges[i].first]++;
		degg[edges[i].second]++;
	}

	ll ways(0);
	FOR(i, k){
		ways += k - degb[edges[i].first] - degg[edges[i].second] + 1;
	}

	cout << ll(ways/2);
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