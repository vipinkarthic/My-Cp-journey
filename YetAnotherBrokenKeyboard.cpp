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
	int n, k; cin >> n >> k;
	string s; cin >> s; 
	char posible[k];

	int hash[26] = { 0 };

	FOR(i, k){
		cin >> posible[i];
		hash[posible[i] - 'a'] = 1;
	}



	ll count[1000000];
	count[0] = 0;
	// count[1] = 1;
	// count[2] = 3;
	// count[3] = 6;

	// 1 + 2 + 3
	ll total_possibel = 0;
	FOR(i, n){
		if(hash[s[i] - 'a']){
			count[i+1] = count[i] + 1;
		}else{
			count[i+1]  = 0;
		}

		total_possibel += count[i+1];
	}

	cout << total_possibel;

	//prefix sum
	// FORL(i, 1, n-1){
	// 	count[i] += count[i-1];
	// }

	// cout << count[n];	


}

int main(){
	ios::sync_with_stdio(0); 
	cin.tie(0);

	int t = 1;
	while(t--){
		solve();
		cout << "\n";
	}

	return 0;
}