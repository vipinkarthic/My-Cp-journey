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
	ll x, y, k; cin >> x >> y >> k;

	if(x+k < y){
		cout << x+k;
		return;
	}

	if(x+k == y){
		cout << 1;
		return;
	}

	while(k > 0){
		ll y_next = ((x / y) + 1) * y;
		ll operations = y_next - x;

		if(operations <= k){
			x = y_next;
			while(x%y ==0) x/=y;
			k -= operations;
		}else{
			x +=k;
			break;
		}
	}

	cout << x;
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