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
	vi apples(n);
	FOR(i, n) cin >> apples[i];

	ll min_diff(LLONG_MAX);

	for(int i = 0; i < (1<<n); i++){
		// cout << i << endl;	
		ll g1(0), g2(0);
		for(int j = 0; j < n; j++){
			if(i&(1<<j)) g1 += apples[j];
			else g2 += apples[j];
		}
		min_diff = min(min_diff, abs(g1-g2));
	}
	cout << min_diff;
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