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
	vi nums;
	unordered_map<int, int> freq;
	FOR(i, n){
		int x; cin >> x;
		freq[x]++;
	}

	for(pi x : freq){
		if(x.second >= 2){
			FOR(i, (int)x.second/2) nums.PB(x.first);
		}
	}

	if(nums.size() < 4){
		cout << "NO";
		return;
	}

	sort(nums.begin(), nums.end());
	ll x0(nums[0]), x1(nums[nums.size()-2]), y0(nums[1]), y1(nums[nums.size()-1]);
	cout << "YES" << endl;
	cout << x0 << " " << y0 << " ";
	cout << x0 << " " << y1 << " ";
	cout << x1 << " " << y0 << " ";
	cout << x1 << " " << y1 << " ";
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