#include<bits/stdc++.h>
using namespace std; 
#define mod (1000000007)
#define mod2 (1000000009)
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

vector<ll> pow31, pow37, S31(2e5), S37(2e5);

struct pair_hash {
    size_t operator()(const pair<ll,ll>& p) const noexcept {
        return std::hash<ll>()(p.first)
             ^ (std::hash<ll>()(p.second) << 1);
    }
};

void solve(){
    int n, m; cin >> n >> m;
    string s; cin >> s;
    vector<ll> hash(n+1, 0), hash2(n+1, 0);
    vector<int> zcount(n+1, 0);
    unordered_set<pair<ll,ll>, pair_hash> uniques;

    FOR(i, n){
        ll k(1);
        if(s[i] == '1') k = 2;
        hash[i+1] = (hash[i] + k * pow31[i]) % mod;
        hash2[i+1] =  (hash2[i] + k * pow37[i]) % mod2;
    }

    FOR(i, n)  zcount[i+1] = zcount[i] + (s[i] == '0');

    while(m--){
        int l, r; cin >> l >> r;
        ll left1(hash[l-1]), right1((hash[n] + mod - hash[r]) % mod);
        ll left2(hash2[l-1]), right2((hash2[n] + mod2 - hash2[r]) % mod2);

        int zeroes = zcount[r] - zcount[l-1], length = r - l + 1, ones = length - zeroes;

        // FOR(i, zeroes){
        //     mid1 = (mid1 + pow31[l-1+i]) % mod;
        //     mid2 = (mid2 + pow37[l-1+i]) % mod2;
        // }
        
        // FOR(i, ones){
        //     mid1 = (mid1 + 2LL * pow31[l-1 + zeroes + i]) % mod;
        //     mid2 = (mid2 + 2LL * pow37[l-1 + zeroes + i]) % mod2;
        // }

        ll mid1 = (pow31[l-1] * S31[zeroes] % mod + 2LL * pow31[l-1+zeroes] * S31[ones] % mod) % mod;
        ll mid2 = (pow37[l-1] * S37[zeroes] % mod2+ 2LL * pow37[l-1+zeroes] * S37[ones] % mod2) % mod2;

        ll final1 = (left1 + mid1 + right1) % mod;
        ll final2 = (left2 + mid2 + right2) % mod2;
        uniques.insert({final1, final2});
    }

    cout << uniques.size();
}

int main(){
    ios::sync_with_stdio(0); 
    cin.tie(0);

    int max(2e5);

    pow31.PB(1);
    pow37.PB(1);

    while(max--){
        pow31.PB((31LL * pow31.back()) % mod);
        pow37.PB((37LL * pow37.back()) % mod2);
    }

    S31[0] = 0;
    S37[0] = 0;
    FORL(i, 1, 2e5){
        S31[i] = (S31[i-1] + pow31[i-1]) % mod;
        S37[i] = (S37[i-1] + pow37[i-1]) % mod2;
    }

    int t;
    cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }

    return 0;
}