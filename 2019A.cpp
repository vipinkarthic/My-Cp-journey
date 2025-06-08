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
	int colors[n];
	FOR(i, n) cin >> colors[i];

	int zeroindex_maxnumber = 0;
	int zeroindex_placed = 0;
	FORL(i, 0, n-1){
		zeroindex_maxnumber = max(zeroindex_maxnumber, colors[i]);
		i++;
		zeroindex_placed++;
	}	

	int oneindex_maxnumber = 0;
	int oneindex_placed = 0;
	FORL(i, 1, n-1){
		oneindex_maxnumber = max(oneindex_maxnumber, colors[i]);
		i++;
		oneindex_placed++;
	}

	cout << max(zeroindex_maxnumber+zeroindex_placed, oneindex_maxnumber+oneindex_placed);

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