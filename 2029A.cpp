#include<bits/stdc++.h>
using namespace std;
#define mod (1000000007)
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

void solve(){
	ll l, r, k; cin >> l >> r >> k;
	if (l == r) {
        cout << (k >= 1);
        return;
    }
    if (k == 1) {
        cout << r - l + 1;
        return;
    }
    if ((r/k) < l) {
        cout << 0;
    } else {
        cout << min(r, (r/k)) - l + 1;
    }

}

int main(){
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
