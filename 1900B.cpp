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
		int a,b,c; cin >> a >> b >> c;
		int d1(0),d2(0),d3(0);
		if((b+c)%2 == 0){
			d1 = 1;
		}
		if((a+c)%2 == 0){
			d2 = 1;
		}
		if((b+a)%2 == 0){
			d3 = 1;
		}
		cout << d1 << " " << d2 << " " << d3 << endl;
	}

	return 0; 
} 
