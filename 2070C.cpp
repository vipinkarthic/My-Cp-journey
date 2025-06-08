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
	string s; cin >> s;
	ll min_p;
	vector<ll> penalty(n);

	FOR(i, n) cin >> penalty[i];

	int l(0), r(*max_element(penalty.begin(), penalty.end()));
	while(l < r){
		ll m = (l+r)/2;
		ll count(0), i(0);

		while(i < n){
			if(penalty[i] > m){
				if(s[i] == 'R'){
					i++; 
					continue;
				}
				if(s[i] == 'B'){
					count++;
					while(i < n){
					    if(s[i] == 'R' && penalty[i] > m)
					        break;
					    i++;
					}
				}
			}
			i++;
		
		}
		
		if(count<=k) r = m;
		else l = m+1;
	}

	cout << r;
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