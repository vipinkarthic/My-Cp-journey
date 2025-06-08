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
	FOR(i, s.size()){
		int l = min(i+10, (int)s.size());
		int curr = s[i] - '0';
		int x = i;
		FORL(j, i, l-1){
			if(s[j] - '0' - (j-i) > curr){
				curr = s[j] - '0' - (j-i);
				x = j;
			}	
		}

		while(x>i){
			swap(s[x], s[x-1]);
			x--;
		}
		// swap(s[x], s[i]);
		s[i] = char(curr + '0');
		// cout << s << endl;
	}
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