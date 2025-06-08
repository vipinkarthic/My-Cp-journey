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
	ll unsorted_sums[n];
	ll sorted_sums[n];

	FOR(i, n){
		cin >> unsorted_sums[i];
		sorted_sums[i] = unsorted_sums[i];
	}

	sort(sorted_sums, sorted_sums+n);


	FORL(i, 1, n-1){
		sorted_sums[i] += sorted_sums[i-1];
		unsorted_sums[i] += unsorted_sums[i-1];
	}

	int t; cin >> t;
	while(t--){
		int type; cin >> type;
		ll l; ll r;
		cin >> l >> r;
		l-=2; r--;
		if(type == 1){
			if(l < 0){
				cout << unsorted_sums[r] << endl;
				continue;
			}
			cout << unsorted_sums[r] - unsorted_sums[l] << endl;
		}else{
			if(l < 0){
				cout << sorted_sums[r] << endl;
				continue;
			}
			cout << sorted_sums[r] - sorted_sums[l] << endl;
		}
	}
}

int main(){
	ios::sync_with_stdio(0); 
	cin.tie(0);

	int t = 1;
	while(t--){
		solve();
		cout << "\n";
	}

	return 0;
}