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
	string imp = "1";
	int zero(0);
	ll count(0);

	FOR(i, n){
		string s; cin >> s;
		if(s=="0"){
			zero = 1;
		}

		int bfl = (s[0] == '1');
		FORL(j, 1, s.size()-1){
			if(s[j]!='0'){
				bfl = 0;
				break;
			}
		}

		if(!bfl) imp = s;
		else{
			count+=s.size()-1;
		}
	}

	if(zero){
		cout << "0";
		return;
	}

	cout << imp;
	FOR(i, count) cout << "0";
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