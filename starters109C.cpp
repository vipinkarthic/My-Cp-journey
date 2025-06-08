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

	int t;cin >> t;
	while(t--){
		int x,y; cin >> x >> y;
		// x sonu and y titu
		if(x>y){
			//n/2 + 1 = 10 then n = 9*2 = 18//
			cout << ((x-1)*2)+1 << endl;
		}else{
			cout << ((y-1)*2)+1 << endl;
		}
	}

	return 0; 
} 
