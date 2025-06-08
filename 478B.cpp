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

void maxmimum(ll n, ll m){
	ll remaining = n-m;
	ll oneteamnumber = 1 + remaining;
	ll ans = (oneteamnumber*(oneteamnumber-1)/2);
	cout << ans << endl;
}

void minimum(ll n , ll m){
	ll memperteam = n/m;
	ll noofaddteam = (n%m);
	ll ans = ((m-noofaddteam)*(memperteam*(memperteam-1))/2) + (noofaddteam*(((memperteam+1)*memperteam))/2 );
	cout << ans << " ";
}

int main() 
{ 
	ios::sync_with_stdio(0); 
	cin.tie(0); 

	ll n,m; cin >> n >> m;
	minimum(n,m);
	maxmimum(n,m);

	return 0; 
} 
