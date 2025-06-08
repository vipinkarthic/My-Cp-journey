#include<bits/stdc++.h>
using namespace std; 
#define mod (998244353)
#define INF INT_MAX
#define FOR(a, c) for(int(a) = 0;(a) <(c);(a)++) 
#define FORL(a, b, c) for(int(a) =(b);(a) <=(c);(a)++) 
#define FORR(a, b, c) for(int(a) =(b);(a) >=(c);(a)--) 
typedef long long int ll; 
typedef vector<int> vi; 
typedef pair<int, int> pi; 
typedef vector<string> vs;
typedef vector<char> vc;
#define PB push_back 
#define POB pop_back 
#define MP make_pair 

void solve(){
	int n, m, d; cin >> n >> m >> d;
	vs rect(n);
	FOR(i, n) cin >> rect[i];

	vector<vi> pos(n);
    FOR(i, n){
        FOR(j, m){
            if(rect[i][j]=='X') pos[i].PB(j+1);
        }
        sort(pos[i].begin(), pos[i].end());

        if(pos[i].empty()){
            cout << 0;
            return;
        }
    }

    vector<vector<ll>> dp(n); 
	FOR(i, pos[n-1].size()) dp[n-1].push_back(0); 

	FOR(i, pos[n-1].size()){
	    int x = pos[n-1][i];
	    int l(0), r(pos[n-1].size());
	    
	    while(l < r){
	        int m = l +(r - l) / 2;
	        if(pos[n-1][m] < x-d) l = m + 1;
	        else r = m;
	    }
	    
	    int left = l;
	    r = pos[n-1].size();
	    
	    while(l < r){
	        int m = l +(r - l) / 2;
	        if(pos[n-1][m] <= x+d) l = m + 1;
	        else r = m;
	    }
	    
	    dp[n-1][i] = (1 + max(0, (l - left) - 1)) % mod;
	}


	int max_r(floor(sqrt((double)d*d - 1)));

    FORR(i, n-2, 0){
        int sz_r = pos[i].size();
        dp[i].assign(sz_r, 0);
        
        int s_nt = pos[i+1].size();
        vector<ll> pfx(s_nt, 0);
        pfx[0] = dp[i+1][0];

        FORL(j, 1, s_nt-1) pfx[j] = (pfx[j-1] + dp[i+1][j]) % mod;
        
        vector<ll> diff(sz_r+1, 0);
        
        FOR(j, sz_r){
            int x = pos[i][j];
            int l = lower_bound(pos[i+1].begin(), pos[i+1].end(), x - max_r) - pos[i+1].begin();
            int r = upper_bound(pos[i+1].begin(), pos[i+1].end(), x + max_r) - pos[i+1].begin() - 1;
            ll sx = 0;
            if(l < s_nt && r >= l){
                sx = pfx[r];
                if(l > 0) sx = (sx - pfx[l-1] + mod) % mod;
            }

            dp[i][j] = (dp[i][j] + sx) % mod;
            
            int lw = lower_bound(pos[i].begin(), pos[i].end(), x - d) - pos[i].begin();
            int lh = upper_bound(pos[i].begin(), pos[i].end(), x + d) - pos[i].begin() - 1;
            if(lw <= lh){
                diff[lw] = (diff[lw] + sx) % mod;
                diff[lh+1] = (diff[lh+1] - sx + mod) % mod;
            }
            
            dp[i][j] = (dp[i][j] - sx + mod) % mod;
        }
        
        ll c = 0;
        FOR(j, sz_r){
            c = (c + diff[j]) % mod;
            dp[i][j] = (dp[i][j] + c) % mod;
        }
    }

    ll ans(0);
    FOR(i, dp[0].size()) ans = (ans + dp[0][i]) % mod;

    cout << ans;
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