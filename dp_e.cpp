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
	int n, W; cin >> n >> W;
	vi w(n), v(n);
	FOR(i, n) cin >> w[i] >> v[i];

	vector<ll> dp(100001,  INF);	
	dp[0] = 0;

	FOR(i, n){
		FORR(j, 100000, v[i]){
            dp[j] = min(dp[j], dp[j - v[i]] + w[i]);
		}
	}

	FORR(i, 100000, 0){
		if(dp[i] <= W){
			cout << i;
			break;
		}
	}
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