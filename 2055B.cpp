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
	int mats[n], reqs[n];
	FOR(i, n) cin >> mats[i];
	FOR(i, n) cin >> reqs[i];

	int lowest_extra = 1e9;
	FOR(i, n){
		if(mats[i] >= reqs[i]){
			lowest_extra = min(lowest_extra, (mats[i] - reqs[i]));
		}
	}

	// cout << lowest_extra << endl;

	int count = 0;
	int required = 0;
	FOR(i, n){
		if(mats[i] < reqs[i]){
			count++;
			if(count > 1) break;
			required = reqs[i] - mats[i];
		}
	}

	if(count>1){
		cout << "NO";
		return;
	}

	if(required <= lowest_extra){
		cout << "YES";
		return;
	}
	cout << "NO";


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