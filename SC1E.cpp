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
	int n, m; cin >> n >> m;
	vi nums(n), prefix(m);
	vector<double> prob(m);
	FOR(i, n) cin >> nums[i];
	FOR(i, m) cin >> prefix[i] >> prob[i];

	int point(-1);
	FORR(i, n-1, 0){
		if(nums[i] != i+1){
			point = i;
			break;
		}
	}

	double temp;
	if(point == -1) temp = 0;
	else temp = 1;

	FOR(i, m){
		if(prefix[i] - 1 >= point) temp*= (1-prob[i]);
	}

	cout << fixed << setprecision(6) << (double)1.0 - temp;

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