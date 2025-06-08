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

	int t; cin >> t;
	while(t--){
		int n,x; cin >> n >> x;
		int stations[n];
		FOR(i,n) cin >> stations[i];
		int last_station = x - stations[n-1];
		int fuel_for_last_return = 2*last_station;
		int fuel_req = max(stations[0],fuel_for_last_return);
		FORL(i,1,n-1){
			fuel_req = max((stations[i] - stations [i-1]),fuel_req);
		}
		// int max_dist_b_two(0);
		// FOR(i,n){

		// }
		cout << fuel_req << endl;
	}

	return 0; 
} 
