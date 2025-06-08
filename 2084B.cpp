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
	vector<ll> nums(n);
	ll mm(LLONG_MAX);
	map<ll, int> freq;
	FOR(i, n){
		cin >> nums[i];
		mm = min((ll)nums[i], mm);
		freq[nums[i]]++;
	}

	if(freq[mm] > 1){
		cout << "Yes";
		return;
	}

	vector<ll> check;
	FOR(i, n){
		if(nums[i]%mm == 0 && nums[i] > mm) check.PB(nums[i]);
	}

	if(check.empty()){
		cout << "No";
		return;
	}

	ll lg(check[0]);

	FORL(i, 1, check.size()-1) lg = __gcd(lg, check[i]);

	if(lg==mm){
		cout << "Yes";
		return;
	}
	cout << "No";
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