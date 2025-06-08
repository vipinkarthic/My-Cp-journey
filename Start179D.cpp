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
    FOR(i, n) cin >> nums[i];
    
    int k = nums.front(), freq(0), d(-INF);
    ll ans(0);

    FOR(i, n){
        if(nums[i]==k) freq++;

        if(2LL * freq > i + 1){
            if(i==0) ans++;
            else if(i==1 && nums[i-1]==k && nums[i]==k) ans++;
            else if(i >= 2 && nums[i-1]==k && nums[i]==k && (2 * freq - (i + 1)) > d) ans++;
        }

        d = max(d, (2 * freq - (i + 1)));
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