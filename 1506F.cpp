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
	vi rows(n), cols(n);
	FOR(i, n) cin >> rows[i];
	FOR(i, n) cin >> cols[i];

	vector<pi> coords(n);
	FOR(i, n) coords[i] = MP(rows[i], cols[i]);
	sort(coords.begin(), coords.end());

	int l(1), r(1);
	int cost(0);
	FOR(i, n){
		int x = coords[i].first;
		int y = coords[i].second;
		int tl(x), tr(y);

		int same_diag(0);
		int off1 = x-y;
		int off2 = l-r;
		if(off1==off2) same_diag = 1;

		if(same_diag){
			if((l+r)%2) cost+=0;
			else cost+=(x-l);	
		}else{
			x -= l-1;
			y -= r-1;

			if((l+r)%2) cost+=(x-y+1)/2;
			else cost+=(x-y)/2;
		}

		l = tl;
		r = tr;	
	}

	cout << cost;
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