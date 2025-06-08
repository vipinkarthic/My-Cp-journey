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
	int n; int k; cin >> n >> k;
	string s; cin >> s;
	int arr[26] = { 0 };
	FOR(i,s.length()){
		arr[s[i] - 'A']++;
	}


	// FOR(i, n){
	// 	cout << arr[i] << " ";
	// }
	// cout << endl;

	sort(arr, arr+26);


	// FOR(i, n){
	// 	cout << arr[i] << " ";
	// }
	// cout << endl;

	int i = 25;
	ll ans = 0;
	while(k){
		if(k - arr[i]<=0){
			ans += static_cast<ll>(k)*k;
			break;
		}else{
			k = k - arr[i];
			ans += static_cast<ll>(arr[i])*arr[i];
		}

		i--;
	}

	cout << ans;
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