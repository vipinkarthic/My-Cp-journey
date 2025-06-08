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
	string org; cin >> org;
	string censor; cin >> censor;
	int censor_length = censor.length();

	string ans = "";

	for(char c : org){
		ans += c;

		if(ans.length() >= censor_length && ans.substr(ans.length() - censor.length(), ans.length()) == censor){
			ans.resize(ans.length() - censor.length());
		}
	}

	cout << ans;

}

int main(){
	ios::sync_with_stdio(0); 
	cin.tie(0);

	(void)!freopen("censor.in", "r", stdin);
	(void)!freopen("censor.out", "w", stdout);


	int t = 1;
	while(t--){
		solve();
		// cout << "\n";
	}

	return 0;
}