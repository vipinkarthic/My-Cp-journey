#include "bits/stdc++.h" 
using namespace std; 
#define max(a, b) (a < b ? b : a) 
#define min(a, b) ((a > b) ? b : a) 
#define mod 1e9 + 7 
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++) 
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++) 
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--) 
#define INF 1000000000000000003 
typedef long long int ll; 
typedef vector<int> vi; 
typedef pair<int, int> pi; 
#define F first 
#define S second 
#define PB push_back 
#define POB pop_back 
#define MP make_pair 
int main() 
{ 
	ios::sync_with_stdio(0); 
	cin.tie(0); 

	int t; cin >> t;
	while(t--){
		int n,k; cin >> n >> k;
		int main[n]; 
		FOR(i,n) cin >> main[i];
		if(is_sorted(main,main+n)){
			cout << "YES" << endl;
			continue;
		}
		if(!is_sorted(main,main+n) && k == 1){
			cout << "NO" << endl;
			continue;
		}
		if(k>1){
			cout << "YES" << endl;
			continue;
		}
	}

	return 0; 
} 
