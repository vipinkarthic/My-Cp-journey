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
	int n; cin >> n; n *= 2;
	int weights[n];
	FOR(i, n) cin >> weights[i];
	sort(weights, weights+n);

	vi pairs;
	FOR(i, n){
		FORL(j, i+1, n-1){
			pairs.PB(abs(weights[j] - weights[i]));
			cout << weights[i] << " - " << weights[j] << " : " << abs(weights[j] - weights[i]) << endl;
		}
	}

	sort(pairs.begin(), pairs.end());

	for(int x: pairs){
		cout << x << " , ";
	}
	
	cout << endl;
	int sum;
	FOR(i, n-2){
		sum += pairs[i]; 
	}

	cout << sum << endl;
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