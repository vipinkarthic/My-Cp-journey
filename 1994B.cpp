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
	string s,t; cin >> s >> t;

	int checker[n] = {0};
	bool possible = true;

	if(n==1){
		cout << "NO";
		return;
	}

	FORL(i, 1, n-1){
		cout << s[i] << " ";
		if(s[i] != t[i]){
			if(t[i] == '1'){
				if(s[i]==s[i-1]){
					possible = false;
					break;
				}
			}else if(t[i] == '0' && checker[i-1] != 0){
				if(s[i]!=s[i-1]){
					possible = false;
					break;
				}
			}
			checker[i]++;
		}
	}

	if(possible) cout << "YES";
	else cout << "NO";
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

