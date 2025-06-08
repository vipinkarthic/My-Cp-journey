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
	vi nums(n);
	vi freq(n+1);
	FOR(i, n){
		cin >> nums[i];
		if(nums[i] >=0 && nums[i] <= n) freq[nums[i]]++;
	}

	int l(0), r(0), ans(0);
	while(r<=n && freq[r]) r++;

	while(l <= r){
		ll m = (l+r)/2;

		ll count(0), temp(0);
		vi freq2(m, 0);

		FOR(i, n){
			if(nums[i] < m && !freq2[nums[i]]){
				freq2[nums[i]] = 1;
				temp++;
			}

			if(temp==m){
				count++;
				temp = 0;
				FOR(i, m) freq2[i] = 0;
			}
		}

		if(count >= k){
			ans = m;
			l = m+1;
		}else r = m-1;
	}

	cout << ans;
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