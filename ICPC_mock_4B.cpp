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
	vi xcoord(n), ycoord(n);
	FOR(i, n) cin >> xcoord[i] >> ycoord[i];

	if(n<3){
		cout << -1;
		return;
	}

	ll min_area(1e18);
	FOR(i, n){
		ll x1(xcoord[i]), y1(ycoord[i]);
		FORL(j, i+1, n-1){
			ll x2(xcoord[j]), y2(ycoord[j]);
			FORL(k, j+1, n-1){
				ll x3(xcoord[k]), y3(ycoord[k]);
				ll det = abs((x1*(y2-y3)) + (x2*(y3-y1)) + (x3*(y1-y2)));
				if(det) min_area = min(min_area, det);
			}
		}
	}

	if(min_area != (ll)1e18) cout << min_area/(double)2;
	else cout << -1;
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