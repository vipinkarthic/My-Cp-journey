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
	vi a(n);
	int zc(0);
	FOR(i, n){
		cin >> a[i];
		if(!a[i]) zc++;
	}

	sort(a.begin(), a.end());
	if(zc){
		cout << n-zc;
	}else{				
		int s(0);
		FORL(i, 1, n-1){
			if(a[i] == a[i-1]){
				s = 1;
			}
		}

		if(s) cout << n;
		else cout << n+1;
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