#include <bits/stdc++.h>
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

void dfs(int i, vi &nums, vi &path, int n, int &n1_node) {
    if (i > n) return;

    if (!n1_node && i < n && nums[i] == 0 && nums[i + 1] == 1) {
        path.PB(i);
        path.PB(n + 1);
        n1_node = true;
    } else {
        path.PB(i);
    }

    dfs(i + 1, nums, path, n, n1_node);
}

void solve() {
    int n; cin >> n;
    vi nums(n + 1, 0);
    FORL(i, 1, n) cin >> nums[i];

    vi path;
    int n1_node = 0;

    if (nums[1]) {
        cout << n + 1 << " ";
        FORL(i, 1, n) cout << i << " ";
        return;
    }

    dfs(1, nums, path, n, n1_node);

    if (!n1_node) path.PB(n + 1);

    for (int x : path) cout << x << " ";
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
