#include<bits/stdc++.h>
using namespace std; 
#define mod (1000000007)
#define INF INT_MAX
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++) 
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++) 
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--) 
typedef long long int ll; 
typedef vector<int> vi; 
typedef vector<long long int> vll;
typedef pair<int, int> pi; 
typedef vector<string> vs;
typedef vector<char> vc;
#define PB push_back 
#define POB pop_back 
#define MP make_pair 

void solve(){
	ll n, k; cin >> n >> k;
	vll nums(n);
	ll sum(0);
	FOR(i, n){
		cin >> nums[i];
		sum+=nums[i];
	}

	vll cm(n, 0);
	FOR(i, n){
		if(i==0){
			cm[i] = nums[i];
			continue;
		}
		cm[i] += cm[i-1] + nums[i];
	}

	// for(int c: cm){
	// 	cout << c << " ";
	// }

	// cout << endl;

	if(sum<=k){
		cout << 0;
		return;
	}

	sort(nums.begin(), nums.end());

	// if(nums.front() == nums.back()){
	// 	cout << abs(nums.back() - k);
	// 	return;
	// }	

	ll steps(1e18);
	FOR(i, n){
		ll temp = nums.front() - floor((nums.front()+k-cm[n-i])/(i+1));	
		steps = min(steps, i+min(0LL, temp));
	}

	cout << steps;

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