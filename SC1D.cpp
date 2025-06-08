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
	string s = "";

	while(s.size() < n){
		string ts = s + "0";
		cout << "? " << ts << endl;
		int ans; cin >> ans;
		if(ans) s = s+"0";	
		else{
			ts = s+"1";
			cout << "? " << ts << endl;
			cin >> ans;

			if(ans) s = s+"1";
			else break;
		}
	}

	while(s.size() < n){
		string ts = "0" + s;
		cout << "? " << ts << endl;
		int ans; cin >> ans;
		if(ans) s = "0" + s;
		else s = "1" + s;
	}

	cout << "! " << s << endl;

}

int main(){
	// ios::sync_with_stdio(0); 
	// cin.tie(0);

	int t;
	cin >> t;
	while(t--){
		solve();
	}

	return 0;
}