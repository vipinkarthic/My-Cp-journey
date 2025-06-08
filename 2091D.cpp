#include<bits/stdc++.h>
using namespace std; 
#define mod (1000000007)
#define INF INT_MAX
#define FOR(a, c) for (int()a = 0; (a) < (c); (a)++) 
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
    int n, m, k; cin >> n >> m >> k;

    int l(1), r(m), ans(m);;
    while(l <= r){
        int mid = l + (r - l) / 2;

        int blcks = m / (mid + 1);
        int empty = m % (mid + 1);
        ll total = (ll)blcks * mid + empty;

        if(total * n >= k){
        	ans = mid;
        	r = mid - 1;
        }else (l = mid + 1);
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