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
    ll n, m; cin >> n >> m;
    vector<ll> nums(n);
    FOR(i, n) cin >> nums[i];

    vector<vector<ll>> dp(n, vector<ll>(m + 2, 0));

    FOR(i, n){
        if (i == 0){
            if (nums[i] == 0){
                FORL(j, 1, m){
                    dp[i][j] = 1;
                }
            } else{
                dp[i][nums[i]] = 1;
            }
        } else{
            if (nums[i] == 0){
                FORL(j, 1, m){
                    dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j] + dp[i - 1][j + 1]) % mod;
                }
            } else{
                dp[i][nums[i]] = (dp[i - 1][nums[i] - 1] + dp[i - 1][nums[i]] + dp[i - 1][nums[i] + 1]) % mod;
            }
        }
    }

    ll ans(0);
    FORL(j, 1, m){
        ans = (ans + dp[n - 1][j]) % mod;
    }

    cout << ans;
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