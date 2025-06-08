#include "bits/stdc++.h" 
using namespace std; 

typedef long long ll;
 
int main() 
{ 
	ios::sync_with_stdio(0); 
	cin.tie(0); 

	ll t; cin >> t;
	while(t--) {
		ll n; cin >> n;
		vector<ll> evens, odds;
		for(ll i = 0; i < n; i++) {
			ll x; cin >> x;
			if(x%2==0) evens.push_back(x);
			else odds.push_back(x);
		}
		sort(evens.begin(), evens.end());
		sort(odds.begin(), odds.end());
		if(evens.size()%2!=0||odds.size()%2!=0) {
			cout << "-1\n";
			continue;
		}
		ll cur = 0;
		ll a[n];
		for(int i = 0; i < evens.size()/2; i++) {
			a[cur] = (evens[evens.size()-1-i] - evens[i])/2;
			a[n/2 + cur] = (evens[evens.size()-1-i] + evens[i])/2;
			cur++;
		}
		for(int i = 0; i < odds.size()/2; i++) {
			a[cur] = (odds[odds.size()-1-i] - odds[i])/2;
			a[n/2 + cur] = (odds[odds.size()-1-i] + odds[i])/2 ;
			cur++;
		}
		for(auto x : a) cout << x << " ";
		cout << "\n";
	}

	return 0; 
} 
