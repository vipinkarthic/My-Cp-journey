#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
	ll n, m; cin >> n >> m;
	bool first = true;
	ll prev;
	ll count = 0;
	for(ll i = 0; i < m; i++) {
		ll x; cin >> x;
		if(!first) {
			if(x < prev) count++;
			prev = x;
		}
		else {
			prev = x;
			first = false;
		}
	}
	cout << count*n + prev - 1 << "\n";
}