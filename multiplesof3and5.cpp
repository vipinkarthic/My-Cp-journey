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

ll sum_of_multiples(int num, int lim) {
	int count = (lim - 1) / num;
	return (ll)num * count * (count + 1) / 2;
}

void solve() {
	int n; cin >> n;
	ll sum3 = sum_of_multiples(3, n);
	ll sum5 = sum_of_multiples(5, n);
	ll sum15 = sum_of_multiples(15, n);
	cout << sum3 + sum5 - sum15;
}
int main() {
	int T = 1;
	cin>>T;
	while (T--) {
		solve();
		cout << "\n";
	}
	return 0;
}
