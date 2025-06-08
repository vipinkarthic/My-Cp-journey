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
	vi height(n), lh(n), rh(n);
	FOR(i, n) cin >> height[i];

	lh[0] = 0;
	rh[n-1] = n-1;

	FORL(i, 1, n-1){
		if(height[i] < height[lh[i-1]]) lh[i] = i;
		else lh[i] = lh[i-1];
	}

	FORR(i, n-2, 0){
		if(height[i] < height[rh[i+1]]) rh[i] = i;
		else rh[i] = rh[i+1];
	}

	int x, z;

	FORL(i, 1, n-2){
		x = lh[i-1];
		z = rh[i+1];
		if(height[x] < height[i] && height[z] < height[i]){
			cout << "YES" << endl;
			cout << x+1 << " " << i+1 << " " << z+1;
			return;
		}
	}

	cout << "NO";
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