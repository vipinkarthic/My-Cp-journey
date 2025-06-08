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

void solve(ll a, ll b){
	ll n = a+b;
	if(n%3 == 0){
		if(min(a,b) >= (n/3)){
			cout << "YES" <<endl;
		}else{
			cout << "NO" <<endl;
		}
	}else{
		cout << "NO" << endl;
	}
}

int main(){
	ios::sync_with_stdio(0); 
	cin.tie(0);

	int t;
	cin >> t;
	while(t--){
		ll a; cin >> a;
		ll b; cin >> b;
		solve(a, b);
	}

	return 0;
}