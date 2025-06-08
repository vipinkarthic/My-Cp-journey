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
	vi nums(n);
	int g;
	FOR(i, n){
		cin >> nums[i];
		if(!i) g = nums[0];
		else g = __gcd(g, nums[i]);
	}

	int elem(-1);
	FOR(i, n){
		if(nums[i] > g || nums[i] < g){
			elem = i;
			break;
		}
	}

	if(elem < 0) cout << "NO";
	else{
		cout << "YES" << endl;
		FOR(i, n){
			if(i == elem) cout << 1 << " ";
			else cout << 2 << " ";
		}
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