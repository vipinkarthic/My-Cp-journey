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
	vi heights(n);
	FOR(i, n) cin >> heights[i];

	if(n==1){
		cout << 0;
		return;
	}

	vi len;
	int i(0);
	while(i < n-1){
		int d = heights[i+1] - heights[i];
		int j(i+1);

		while(j < n-1 && heights[j+1] - heights[j] == d) j++;

		len.PB(j-i+1);
		i = j;
	}

	ll ans(0);
	FOR(i, len.size()){
		ans += (ll)((ll)len[i] * (ll)(len[i]-1))/2;
		if(i < len.size()-1) ans += (ll)(len[i] - 1) * (ll)(len[i+1]-1);
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