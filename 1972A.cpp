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
	int a[n]; int b[n];
	FOR(i,n){
		cin >> a[i];
	}

	FOR(i, n){
		cin >> b[i];
	}

	int ans = 0;
	FOR(i, n){
		if(a[i] > b[i]){
			FORR(j, n-1, i+1){
				a[j] = a[j-1];
			}
			a[i] = b[i];
			ans++;
		}
	}

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