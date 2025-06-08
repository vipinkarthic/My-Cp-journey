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
    ll n, k; cin >> n >> k;
    vector<ll> can_per_slot(n);
    FOR(i, n) cin >> can_per_slot[i];
    sort(can_per_slot.begin(), can_per_slot.end());
    ll temp = 0, presses = 0;
    FOR(i, n){
        ll prev_value = (i == 0) ? 0 : can_per_slot[i - 1];
        ll press_i = (n - i) * (can_per_slot[i] - prev_value);
        if (temp + press_i >= k){
            presses += k - temp;
            break;
        }
        presses += press_i + 1;
        temp += press_i;
    }

    cout << presses;
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
cpp