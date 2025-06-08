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
	int n, x; cin >> n >> x;
	int weight[n];
	int ans = 0;
	FOR(i, n){
		cin >> weight[i];
	}

	sort(weight, weight+n);

	int l(0), r(n-1);

	while(l<=r){
		int sum = weight[l] + weight[r];

		if( sum <= x){
			l++; r--;
		}else{
			r--;
		}

		ans++;
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