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
	int n, k; cin >> n >> k;
	int costs[n];

	FOR(i, n) cin >> costs[i];
	sort(costs, costs+n);

	if(k == 0){
		ll alice(0), bob(0);
		FOR(i, n){
			if(!(i%2)) bob+=costs[i];
			else alice+=costs[i];
		}
		cout << abs(alice - bob);
		return;
	}


	for(int i = n-2; i >= 0 && k > 0; i-=2){
		int temp = min((costs[i+1] - costs[i]), k);
		costs[i] += temp; 
		k-=temp;
	}

	ll alice(0), bob(0);
	FOR(i, n){
		if(!(i%2)) bob+=costs[i];
		else alice+=costs[i];
	}

	cout << abs(alice - bob);


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
}