#include<bits/stdc++.h>
using namespace std; 
#define mod (998244353)
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

vi pow2(100001);

void solve(){
	int n; cin >> n;
	vi p(n), q(n), ploc(n), qloc(n);
	FOR(i, n){
		cin >> p[i];
		ploc[p[i]] = i;
	}
	FOR(i, n){
		cin >> q[i];
		qloc[q[i]] = i;
	}

	vi max1(n), max2(n);
	max1[0] = p[0];
	max2[0] = q[0];
	FORL(i, 1, n-1){
		if(max1[i-1] > p[i]) max1[i] = max1[i-1];
		else max1[i] = p[i];

		if(max2[i-1] > q[i]) max2[i] = max2[i-1];
		else max2[i] = q[i];
	}

	vi ans(n);
	FOR(i, n){
		int c(max(max1[i], max2[i]));
		if(ploc[c] <= i && qloc[c] <= i && (ploc[c]+qloc[c] == i)) ans[i] = pow2[c+1];
		else{
			int temp(-INF);
			if(ploc[c] <= i) temp = max(temp, q[i-ploc[c]]);
			if(qloc[c] <= i) temp = max(temp, p[i-qloc[c]]);

			ans[i] = (((pow2[c]%mod) + (pow2[temp]%mod))%mod);
		}
	}

	FOR(i, n) cout << ans[i] << " ";
}

int main(){
	ios::sync_with_stdio(0); 
	cin.tie(0);

	pow2[0] = 1;
	FORL(i, 1, 100000) pow2[i] = (pow2[i-1]*2)%mod;

	int t;
	cin >> t;
	while(t--){
		solve();
		cout << "\n";
	}

	return 0;
}