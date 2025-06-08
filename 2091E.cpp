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

const int P_MAX = (int)(4*1e7);
bitset<P_MAX/2> P_BITS;
int P_COUNT = 1;
vector<ll> PRIMES = {2};

void calc_PRIMES() {
    P_BITS.set();
    for (int i = 3; i / 2 < (int)P_BITS.size(); i = 2 * P_BITS._Find_next(i / 2) + 1) {
        PRIMES.push_back(i);
        ++P_COUNT;
        for (auto j = (int64_t) i * i / 2; j < (int)P_BITS.size(); j += i)
            P_BITS[j] = 0;
    }
}
void solve(){
	ll n; cin >> n;
	ll ans(0);

	FOR(i, PRIMES.size()){
		if(PRIMES[i] > n) break;
		ans+= (n/PRIMES[i]);
	}	

	cout << ans;
}

int main(){
	ios::sync_with_stdio(0); 
	cin.tie(0);
	calc_PRIMES();

	int t;
	cin >> t;
	while(t--){
		solve();
		cout << "\n";
	}

	return 0;
}