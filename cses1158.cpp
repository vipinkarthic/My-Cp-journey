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

void solve() {
    int n, x; cin >> n >> x;
    vi books(n);
    vi pages(n);
    FOR(i, n) cin >> books[i];
    FOR(i, n) cin >> pages[i];

    vector<vector<int>> dp(n + 1, vector<int>(x + 1, 0));

    FORL(i, 1, n) {
        FORL(j, 1, x) {
            dp[i][j] = dp[i - 1][j];
            if (j >= books[i - 1]) {
                dp[i][j] = max(dp[i][j], dp[i - 1][j - books[i - 1]] + pages[i - 1]);
            }
        }
    }

    cout << dp[n][x];
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    int t = 1;
    while (t--) {
        solve();
        cout << "\n";
    }

    return 0;
}
