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
	vi swim(n);
	vi bugs(n);
	vi work(n);
	FOR(i, n) cin >> swim[i] >> bugs[i] >> work [i];

	vector<vi> dp(n, vi(3, 0));
    dp[0][0] = swim[0];
    dp[0][1] = bugs[0];
    dp[0][2] = work[0];
    
    FORL(i, 1, n-1){
        dp[i][0] = max(dp[i-1][1], dp[i-1][2]) + swim[i];
        dp[i][1] = max(dp[i-1][0], dp[i-1][2]) + bugs[i];
        dp[i][2] = max(dp[i-1][0], dp[i-1][1]) + work[i];
    }
    
    cout << max({dp[n-1][0], dp[n-1][1], dp[n-1][2]});
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