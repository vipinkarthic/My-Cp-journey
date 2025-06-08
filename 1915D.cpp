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
	int n; string s;
	cin >> n >> s;
	string ans; int x;
	while (s.size()){
		if (s.back() == 'a' || s.back() == 'e') x = 2;
		else x = 3;
		
		while (x--) {
			ans += s.back();
			s.POB();
		}
		ans += '.';
	}
	ans.POB();
	reverse(ans.begin(), ans.end());
	cout << ans;
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