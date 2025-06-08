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
	int n, k, m; cin >> n >> k >> m;
	string s; cin >> s;
	bool is_possible = true;
	bool atleast_k = true;
	int freq[26] = { 0 };
	FOR(i, m){
		freq[s[i] - 'a']++;
	}

	// for(int x: freq) cout << x << " ";
	// cout << endl;
	char temp;
	FOR(i, k) {
	    if (freq[i] < n) {
	        temp = i + 'a';
	        is_possible = false;
	        break;
	    }
	}


	if(is_possible){
		cout << "YES";
	}else{
		cout << "NO" << endl;
		while(n--){
			cout << temp;
		}
	}
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