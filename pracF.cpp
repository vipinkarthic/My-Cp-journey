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
	int arr[n];
	FOR(i, n) cin >> arr[i];

	int type2(0), type3(0);

	int dp[n+1]; dp[0] = 0;
	FORL(i, 1, n){
		while(arr[i-1] - arr[type2] >= 90 || arr[i-1] - arr[type3] >= 1440){
			if(arr[i-1] - arr[type2] >= 90) type2++;
			else if(arr[i-1] - arr[type3] >= 1440) type3++;
		}

        dp[i] = min({dp[i - 1] + 20, dp[type2] + 50, dp[type3] + 120});
		cout << dp[i] - dp[i-1] << endl;
	}


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