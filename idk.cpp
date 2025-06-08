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
    string s, t; cin >> t >> s;
    const int p = 31; 
    int S = s.size(), T = t.size();

    vector<ll> computed_powers(max(S, T)); 
    computed_powers[0] = 1; 
    FORL(i, 1, computed_powers.size() - 1)
        computed_powers[i] = (computed_powers[i-1] * p) % mod;

    vector<ll> h(T + 1, 0); 
    FOR(i, T)
        h[i+1] = (h[i] + (t[i] - 'a' + 1) * computed_powers[i]) % mod; 

    ll h_s = 0; 
    FOR(i, S)
        h_s = (h_s + (s[i] - 'a' + 1) * computed_powers[i]) % mod; 

    vi occurrences;
    FOR(i, T - S + 1) {
        ll cur_h = (h[i+S] - h[i] + mod) % mod;
        if (cur_h == h_s * computed_powers[i] % mod)
            occurrences.PB(i);
    }
    
    for(auto x : occurrences){
        cout << x  << " ";
    }
    
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


