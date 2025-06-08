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
	int a[n];
	int b[n];
	FOR(i, n){
		cin >> a[i];
	}

	FOR(i, n){
		cin >> b[i];
	}

	int mra = 0;
	int mrb = 0;

	FOR(i, n){
		int ra = a[i];
		int rb = b[i];
		if(ra < rb){
			mrb += rb;
		}else if(ra > rb){
			mra += ra;
		}else{
			
		}
	}

	cout << ratings;
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