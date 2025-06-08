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

ll power(ll a, ll b){
	ll r(1);
	while(b){
		if(b&1) r *= a;
		a *= a;
		b >>= 1;
	}
	return r;	
}
 
void solve(){
    ll n; cin >> n;
    ll d = 1, lb = 0;
    while (1) {
        ll c = 9 * power(10, d - 1);
        ll ub = lb + (ll)d * (ll)c;
        if(n > lb && n <= ub)
            break;
        lb = ub;
        d++;
    }
    
    ll no = (ll)pow(10, d - 1) + ((ll)n - (ll)lb - 1) / (ll)d;
    ll index = ((ll)n - (ll)lb - 1) % (ll)d;
    ll ans = (no / power(10, d - index - 1)) % 10;
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