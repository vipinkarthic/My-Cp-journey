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
	int n, s, m; cin >> n >> s >> m;
	vector<pi> timeslot(n);
	FOR(i, n){
		cin >> timeslot[i].first >> timeslot[i].second;
	}
	sort(timeslot.begin(), timeslot.end());

	FORL(i, 1, n-1){
		if(timeslot[i].first - timeslot[i-1].second >= s){
			cout << "YES";
			return;
		}
	}

	if(timeslot[0].first >= s || (m-timeslot[n-1].second) >= s){
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