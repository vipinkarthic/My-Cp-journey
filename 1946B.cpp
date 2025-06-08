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
    int n, k;
    cin >> n >> k;
    vi arr;
    FOR(i, n){
        int x; cin >> x;
        arr.PB(x);
    }

	ll cur = 0;
	ll answer = 0;
	
    for(auto &i : arr) {
        cur += i;
        answer = max(answer, cur);
        cur = max(cur, 0ll);
    }
    
    ll sum = (accumulate(arr.begin(), arr.end(), 0ll) % mod + mod) % mod;

    while(k--){
    	sum = (sum+answer) % mod;
    	answer = (answer * 2 ) % mod;
    }

    cout << sum;
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
