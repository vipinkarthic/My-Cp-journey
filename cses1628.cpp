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
	vector<pi> times;
	FOR(i, n){
		int a, b; cin >> a >> b;
		times.PB({a,b});
	}

	sort(times.begin(), times.end(), [](pi x, pi y){
		return x.second < y.second;
	});

	int movie = 0;
	int previous = 0;
	FOR(i, times.size()){
		if(previous <= times[i].first){
			movie++;
			previous = times[i].second;
		}
	}
	cout << movie;
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