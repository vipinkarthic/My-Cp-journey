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
	ll k, l1, r1, l2, r2; cin >> k >> l1 >> r1 >> l2 >> r2;
	vector<ll> powers;
	int temp(1);
	while(temp <= r2){
		powers.PB(temp);
		if(temp > (mod/k)){
			break;
		}
		temp *= k;
	}
	ll ans = 0;
	FOR(i, powers.size()){
		ll n = powers[i];
        ans += max(0LL, min(r1, r2/n) - max(l1, (l2+n-1)/n)+1);
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