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
	ll n; cin >> n;

	ll sqr = (ll) n*(n+1)/2;
	if(floor(sqrt(sqr)) == sqrt(sqr)){
		cout << -1;
		return;
	}

	vi ans(n);
	FOR(i, n) ans[i] = i+1;

	ll sum(0);
	FOR(i, n){
	    sum += ans[i];
	    if(floor(sqrt(sum)) == sqrt(sum)){
	        if(i >= n-1) continue;
	        int temp = ans[i];
	        swap(ans[i], ans[i+1]);
	        sum = sum - temp + ans[i];
	    }
	}

	for(int x: ans){
		cout << x << " ";
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