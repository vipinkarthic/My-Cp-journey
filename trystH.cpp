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
	vi ans(2*n);

	FOR(i, n){
		if(i == n-1) ans[i] = 1;
		else ans[i] = i+2;
	}

	FOR(i, n){
		if((i+1) == k) ans[i+n] = 1;
		else if ((i+1) < k) ans[i+n] = i+2;
		else ans[i+n] = i+1;
	}

	FOR(i, 2*n) cout << ans[i] << " ";
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