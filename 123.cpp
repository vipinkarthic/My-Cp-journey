#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ll t; cin >> t;
	while(t--) {
		ll n; cin >> n;
		bool possible = true; 
		ll prev = 0;
		for(ll i = 0; i < n; i++) {
			ll x; cin >> x;
			if(x%2!=0) x+=(x%10);
			if(x%10==0) x/=10;
			else if((x/10)%2) x = (x%10 == 6)-2;
			else x = (x%10!=6)-2;
			if(i>0 && x!=prev) possible = false;
			prev = x;
		}
		if(possible) cout << "YES\n";
		else cout << "NO\n";
	}
}