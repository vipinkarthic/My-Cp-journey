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
	int n; int m; int d; cin >> n >> m >> d;
	int arr[n*m];
	int mods[n*m];

	FOR(i, n*m){
		cin >> arr[i];
		mods[i] = arr[i] % d;
	}

	sort(arr, arr+(n*m));
	sort(mods, mods+(n*m));

	// for(int x: arr){
	// 	cout << x << " ";
	// }

	// cout << endl;

	// for(int x: mods){
	// 	cout << x << " ";
	// }

	// cout << endl;

	FORL(i, 0, (n*m)-2){
		if(mods[i] != mods[i+1]){
			cout << -1;
			return;
		}
	}

	int median = 0;

    if (n*m % 2 == 0) {
        median = n*m/2 - 1;
    } else {
        median = n*m/2;
    } 

	ll sum = 0;

	FOR(i, n*m){
		sum+= abs(arr[i] - arr[median])/d;
	}

	cout << sum;

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