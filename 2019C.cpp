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
    ll n, k;
    cin >> n >> k;
    ll count[n];  
    FOR(i, n) {
        cin >> count[i]; 
    }

    ll sum = 0, highest = 0;
    FOR(i, n){
        sum += count[i];
        highest = max(highest, count[i]);
    }

    ll l = 1, r = n, ans = 0;
    while (l <= r) {
        ll mid = l + (r - l) / 2;
        ll size = (sum + k) / mid;
        if (size >= highest && (size * mid - sum) <= k) {
            ans = mid;       
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }   
    }

    cout << ans;
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
