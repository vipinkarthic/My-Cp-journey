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
	string s; cin >> s;
	int lcase(0);
	int ucase(0);

	FOR(i, s.length()){
		if(int(s[i]) > 96) lcase++;
		else ucase++;
	}

	if(lcase < ucase){
		FOR(i, s.length()){
			if(int(s[i]) > 96) cout << char(s[i] - 32);
			else cout << s[i];
		}
	}else{
		FOR(i, s.length()){
			if(int(s[i]) < 91) cout << char(s[i] + 32);
			else cout << s[i];
		}
	}

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