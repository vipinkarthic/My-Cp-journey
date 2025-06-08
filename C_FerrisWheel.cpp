#include <bits/stdc++.h>
using namespace std;
#define mod (998244353)
#define INF INT_MAX
#define FOR(a, c) for (int (a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int (a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int (a) = (b); (a) >= (c); (a)--)
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef vector<string> vs;
typedef vector<char> vc;
#define PB push_back
#define POB pop_back
#define MP make_pair

void solve() {
    ll n; cin >> n;
    ll len = 0;
    ll b = 1;
    while ((1LL << (b - 1)) <= n) {
        len += ((min(1LL << b, n + 1) - 1) - (1LL << (b - 1)) + 1) * b;
        b++;
    }

    ll ans = 0;
    b = 1;
    ll seen = 0;
    FOR(pos, len) {
        while (1) {
            ll start = 1LL << (b - 1);
            if (start > n) break;

            ll end = min(1LL << b, n + 1) - 1;
            ll count = end - start + 1;
            ll cb = count * b;

            if (pos < seen + cb) {
                ll rps = pos - seen;
                ll nx = start + rps / b;
                ll bps = rps % b;
                ll digit = (nx >> (b - 1 - bps)) & 1;
                ans = (ans * 10 + digit) % mod;
                break;
            }

            seen += cb;
            b++;
        }
    }
    cout << ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << "\n";
    }

    return 0;
}
