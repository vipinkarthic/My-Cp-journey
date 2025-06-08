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
    ll n, m, r, c;
    cin >> n >> m >> r >> c;
    ll i = (r - 1) * m + c;
    ll moves = n * m - i;
    ll moves_m = n - r;
    ll moves_1 = moves - moves_m;
    ll dist = moves_1 * 1 + moves_m * m;
    cout << dist;
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