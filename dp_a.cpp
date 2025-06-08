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
	vi cost(n);
	FOR(i, n) cin >> cost[i];

	vi dp(n);
	dp[0] = 0;
	dp[1] = abs(cost[1] - cost[0]);
	FORL(i, 2, n-1){
		dp[i] = min(dp[i-1] + abs(cost[i] - cost[i-1]), dp[i-2] + abs(cost[i] - cost[i-2]));
	}

	cout << dp[n-1];
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