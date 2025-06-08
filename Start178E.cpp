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
	vi nums(n);
	FOR(i, n) cin >> nums[i];

	vi diff;
	diff.PB(nums[0]);
	FORL(i, 1, n-1){
		if(nums[i] != nums[i-1]) diff.PB(nums[i]);
	}

	vi dp(diff.size(), n+1);
	dp[0] = 1;
	FORL(i, 1, dp.size() - 1){
		dp[i] = dp[i-1] + 1;
		FOR(j, i){
			if(diff[i] == diff[j]){
				if(!j) dp[i] = min(dp[i], 1);
				else dp[i] = min(dp[i], dp[j-1] + 1);
			}
		}
	}

	cout << dp[dp.size()-1];
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