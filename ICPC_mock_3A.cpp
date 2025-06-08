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
	int gold(-1), silver(-1), bronze(-1);
	string ans;

	FOR(i, n){
		int g, s, b; cin >> g >> s >> b;
		string country; getline(cin, country);

		if( (g > gold) || (g == gold && s > silver) || (g == gold && s == silver && b > bronze)){
			gold = g;
			silver = s;
			bronze = b;
			ans = country;
		}
	}

	cout << ans;
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