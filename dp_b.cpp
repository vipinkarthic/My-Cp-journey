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
    vi cost(n);
    for(int i = 0; i < n; i++){
        cin >> cost[i];
    }
    
    vi dp(n, INT_MAX);
    dp[0] = 0;
    
    FORL(i, 1, n-1){
        for(int j = max(0, i - k); j < i; j++){
            dp[i] = min(dp[i], dp[j] + abs(cost[i] - cost[j]));
        }
    }
    
    cout << dp[n - 1];
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