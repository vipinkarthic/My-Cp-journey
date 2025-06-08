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
	ll n; cin >> n;
	vi b;
	FOR(i, n){
		int temp; cin >> temp;
		b.PB(temp);
	}

	sort(b.begin(), b.end());
	ll max_diff = b.back() - b.front();

	ll fcount(0);
	ll scount(0);

	for(int x : b){
		if(x == b.front()) fcount++;
		if(x == b.back()) scount++;
	}

	ll ans;

    if (b.front() == b.back()) {
        ans = (n * (n - 1)) / 2;
    } else {
        ans = fcount * scount;
    }

	cout << max_diff << " " << ans;

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