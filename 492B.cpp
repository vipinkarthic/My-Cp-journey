#include "bits/stdc++.h" 
using namespace std; 
#define max(a, b) (a < b ? b : a) 
#define min(a, b) ((a > b) ? b : a) 
#define mod 1e9 + 7 
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++) 
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++) 
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--) 
#define INF 1000000000000000003 
typedef long long int ll; 
typedef vector<int> vi; 
typedef pair<int, int> pi; 
#define F first 
#define S second 
#define PB push_back 
#define POB pop_back 
#define MP make_pair 
int main() 
{ 
	ios::sync_with_stdio(0); 
	cin.tie(0); 

	int n; cin >> n;
	int a; cin >> a;
	int lights[n];
	int low(0),upper(0);
	FOR(i,n){
		cin >> lights[i];
	}

	int diff(0),maxn(0);

	sort(lights,lights+n);
	int ini = lights[0];
	int last = lights[n-1];
	maxn = max(ini,a-last)*2;
	FORL(i,1,n-1){
		maxn = max(maxn,(lights[i] - lights[i-1]));
		// if(maxn = lights[i] - lights[i-1]){
		// 	low = i-1;
		// 	upper = i;
		// }
	}
	// FORL(i,1,n-1){
	// 	// cout << "CHECK" << endl;
	// 	diff = lights[i]-lights[i-1];
	// 	// cout << "diff " << diff << endl;
	// 	if(diff > maxn){
	// 		maxn = diff;
	// 		low = i-1;
	// 		upper = i;
	// 	}

	// }

	// cout << lights[upper] << endl;
	// cout << lights[low] << endl;

	// double ans = (lights[upper] - lights[low])/2.0;
	cout.precision(11);
	cout << fixed << maxn/2.0 << endl;

	return 0; 
} 
