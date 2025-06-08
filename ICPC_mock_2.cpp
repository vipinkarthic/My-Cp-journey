#include <bits/stdc++.h>
using namespace std;

#define sz(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define INF(type) numeric_limits<type>::max()
#define FOR(i, n) for (int i = 0; (i) < (n); (i)++)

using ll = long long;
using ld = long double;
using vint = vector<int>;
using pint = pair<int, int>;

void solve() {
        int n; cin >> n;
        cout << 3*(n/2)*(n/2) << endl;

        for(int i= 1; i <= n/2; i++){
                for(int j = 1; j <= n/2; j++){
                        cout << 1 << " " << (2*i -1) << " " << (2*j) << " "  << 2 << endl;
                        cout << 1 << " " << (2*i) << " " << (2*j - 1) << " "  << 2 << endl;
                        cout << 2 << " " << (2*i - 1) << " " << (2*j - 1) << " " << 1 << endl;
                }
        }
}

int main() {
        ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int T = 1;
    // cin >> T;
    while (T--) {
                solve();
        cout << "\n";
    }
    return 0;
}