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
	string s,t; cin >> s >> t;
	int spointer = 0;
	int tpointer = 0;
	while(spointer < s.length() && tpointer < t.length()){
		if(s[spointer] == t[tpointer]){
			spointer++; tpointer++;
		}else if(s[spointer] == '?'){
			s[spointer] = t[tpointer];
			spointer++;
			tpointer++;
		}else{
			spointer++;
		}
	}

	if(spointer>=s.length() && tpointer < t.length()){
		cout << "NO";
		return;
	}

	FOR(spointer, s.length()){
		if(s[spointer] == '?'){
			s[spointer] = 'v';
		}
	}

	cout << "YES" << endl;
	cout << s;
	

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