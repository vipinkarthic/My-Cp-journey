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

	int t; cin >>  t;
	while(t--){
		ll y,x;
		cin >> y >> x;
		ll square = max(x,y);
		if(max(x,y) % 2 == 0){
			if(y>x){
				ll ans = square*square - (x - 1);
    			cout << ans << endl;
			}else{
				ll ans = square*square - (max(x,y)-1) - (abs(x-y));
				cout << ans << endl;
			}
		}else{
			if(y>x){
				ll ans = square*square - (max(x,y)-1) - (abs(x-y));
				cout << ans << endl;
			}else{
				ll ans = square*square - (min(x,y) - 1);
    			cout << ans << endl;
			}
		}
	}

	return 0; 
} 
