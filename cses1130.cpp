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

int dfs(int pre, int cur, vector<vi> &adj, vi &done) {
	int ans = 0;
    for (int i : adj[cur]) {
        if (i != pre) {
            ans += dfs(cur, i, adj, done);
            if (!done[i] && !done[cur]) {
                done[cur] = done[i] = true;
                ans++;
            }
        }
    }
    return ans;
}

void solve() {
    int n; cin >> n;
    vector<vi> adj(n+1);
    vi done(n+1, 0);
    FOR(i, n - 1) {
        int a, b;
        cin >> a >> b;
        adj[a].PB(b);
        adj[b].PB(a);
    }

    int ans = dfs(0, 1, adj, done);
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