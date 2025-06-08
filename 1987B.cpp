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
	ll arr[n];

	FOR(i, n){
		cin >> arr[i];
	}

	bool sorted = is_sorted(arr, arr+n);

	if(sorted){
		cout << 0;
		return;
	}

	ll price = 0;
	ll number_of_operations = 0;

	FORL(i, 1, n-1){
		if(arr[i] < arr[i-1]){
			ll cost = arr[i-1] - arr[i];
			price += cost;
			arr[i] = arr[i-1];
			number_of_operations = max(number_of_operations, cost);
		}
	}

	cout << price + number_of_operations;

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