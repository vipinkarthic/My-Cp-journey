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

	vi freq(10, 0);
	FOR(i, n){
		freq[nums[i]]++;
        if(freq[0] >= 3 && freq[1] >= 1 && freq[2] >= 2 && freq[3] >= 1 && freq[5] >= 1){
            cout << i + 1;
            return;
        }
	}
	cout << 0;
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