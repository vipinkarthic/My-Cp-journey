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
	int n, k, p; cin >> n >> k >> p;
	int chairs[n];
	FOR(i, n){
		cin >> chairs[i];
	}
	int sum = 0;
	sort(chairs, chairs+n);
	FOR(i, n-1){
		sum+=chairs[i];
	}

	if(k+chairs[n-1] < p+sum){
		cout << "Varun";
	}else if(k+chairs[n-1] > p+sum){
		cout << "Ved";
	}else{
		cout << "Equal";
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