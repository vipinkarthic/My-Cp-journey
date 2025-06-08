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
	ll n, k, x; cin >> n >> k;
	string s; cin >> s;
	vector<ll> nums(n, 0);
	FOR(i, n){
		if(s[i] == '1') cin >> nums[i];
		else cin >> x;
	}

	int i(0);
	while(i < n){
		if(s[i] == '1'){
			int j(i);
			ll sum(0);
            while(j < n && s[j]=='1'){
                sum += nums[j];
                j++;
            }
			if(sum > k){
				cout << "NO";
				return;
			}else if(sum == k){
				cout << "YES" << endl;
				FOR(i, n){
					if(s[i] == '0') cout << "-1000000000000000000" << " ";
					else cout << nums[i] << " ";
				}
				return;
			}
			i = j;
		}else i++;
	}	

	vector<ll> l_sum(n), r_sum(n);
	ll l(0), r(0);
	FOR(i, n){
		if(s[i] == '1') l = max(nums[i], l+nums[i]);
		else l_sum[i] = l, l =0;
	}

	FORR(i, n-1, 0){
		if(s[i] == '1') r = max(nums[i], r+nums[i]);
		else r_sum[i] = r, r = 0;
	}

	ll zi(-1);
	FOR(i, n){
		if(s[i] == '0'){
			zi = i;
			break;
		}
	}

	if(zi == -1){
		cout << "NO";
		return;
	}else{
		if(zi>0) l = l_sum[zi];
		else l = 0;

		if(zi<n-1) r = r_sum[zi];
		else r = 0; 
	}

	cout << "YES" << endl;
	FOR(i, n){
		if(s[i] == '1') cout << nums[i] << " ";
		else if(i == zi) cout << (ll)(k-(l+r)) << " ";
		else cout << "-1000000000000000000" << " ";
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