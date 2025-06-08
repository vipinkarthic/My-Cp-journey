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
	int n, k; cin >> n >> k;
	ll total(0), i_max(-INF), i_min(INF);
	int freq_max(0);
	FOR(i, n){
		ll x; cin >> x;
		ll temp = i_max;
		i_max = max(i_max, x);
		if(temp < i_max) freq_max=1;
		else if(x == i_max) freq_max++;

		i_min = min(i_min, x);
		total+=x;
		// cout << i_max << " " << i_min << "+";
	}
	// if(i_max - i_min - 1 > k) cout << "Jerry";
	if(i_max - i_min - 1 > k || ((i_max - i_min -1 == k) && freq_max > 1)) cout << "Jerry";
	else{
		if(total%2) cout << "Tom";
		else cout << "Jerry";
	}
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