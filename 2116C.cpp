#include<bits/stdc++.h>
using namespace std; 
#define mod (1000000007)
#define INF INT_MAX
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++) 
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++) 
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--) 
typedef long long int ll; 
typedef vector<ll> vi; 
typedef pair<ll, ll> pi; 
typedef vector<string> vs;
typedef vector<char> vc;
#define PB push_back 
#define POB pop_back 
#define MP make_pair 

void solve(){
	ll n; cin >> n;
	vi nums(n);
	FOR(i, n) cin >> nums[i];

	ll g(nums[0]);
	FORL(i, 1, n-1) g = __gcd(g, nums[i]);

	vi dsors(n);
	ll oc(0), mx(-INF);
	FOR(i, n){
		dsors[i] = nums[i]/g;
		if(dsors[i] == 1) oc++;
		mx = max(mx, dsors[i]);
	}

	if(oc){
		cout << n - oc;
		return;
	}

	vi dp(mx+1, INF);
	vi current;
	FOR(i, n){
		if(dp[dsors[i]] == INF){
			dp[dsors[i]] = 1;
			current.PB(dsors[i]);
		}else if(dp[dsors[i]] > 1) dp[dsors[i]] = 1;

		vi temp = current;
		vector<pi> change;

		FOR(j, temp.size()){
			if(dp[temp[j]]+1 < dp[__gcd(temp[j], dsors[i])]) change.PB(MP(__gcd(temp[j], dsors[i]), dp[temp[j]]+1));
		}

		FOR(j, change.size()){
			ll val(change[j].first), s(change[j].second);
			if(dp[val] > s){
				if(dp[val] == INF){
					current.PB(val);
				}
				dp[val] = s;
			}
		}

		if(dp[1] < INF){
			cout << (n+dp[1]-2);
			return;
		}
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