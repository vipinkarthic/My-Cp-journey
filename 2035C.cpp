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
    int n; cin >> n;
    vector<ll> a(n), odds(n), powers(n), twos((n * 32) + 1); 
    FOR(i, n) cin >> a[i];
    
    twos[0] = 1;
    FORL(i, 1, n * 32) {
        twos[i] = (twos[i - 1] * 2) % mod;
    } 
    ll ans = 0;
    int ptr = 0; 
    FOR(i, n){
        int x = a[i], y = 0;
        while(x % 2 == 0){
            x /= 2;
            y++;
        }
        odds[ptr] = x;
        powers[ptr] = y;
        
        while(ptr){
            if (odds[(ptr-1)] < odds[ptr] * twos[powers[ptr]]) {
                ans = (ans - odds[(ptr-1)] * twos[powers[(ptr-1)]] % mod + mod) % mod;
                ans = (ans + odds[(ptr-1)]) % mod;
                powers[ptr] += powers[(ptr-1)];
                odds[(ptr-1)] = odds[ptr];
                powers[(ptr-1)] = powers[ptr];
                ptr--;
            }else{
                break;
            }
        }
        ans = (ans + odds[ptr] * twos[powers[ptr]]) % mod;
        ptr++;
        cout << ans << " \n"[n-1 == i];
    }

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}