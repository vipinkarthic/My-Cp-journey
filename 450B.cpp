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
#define WL(a) while(a--)
int main() 
{ 
	ios::sync_with_stdio(0); 
	cin.tie(0); 

	ll x;
	ll y;
	ll n;
	cin >> x >> y >> n;

	ll zero = x;
	ll one = y;
	ll two = y -x;
	ll three = 0-x;
	ll four = 0-y;
	ll five = x-y;

	ll modcheck = n%6;

	modcheck--;

	if(modcheck == 0){
		cout << (((zero%static_cast<ll>(mod)) + static_cast<ll>(mod)) % static_cast<ll>(mod));
		return 0;
	}


	if(modcheck == 1){
		cout << (((one%static_cast<ll>(mod)) + static_cast<ll>(mod)) % static_cast<ll>(mod));
		return 0;
	}


	if(modcheck == 2){
		cout << (((two%static_cast<ll>(mod)) + static_cast<ll>(mod)) % static_cast<ll>(mod));
		return 0;
	}


	if(modcheck == 3){
		cout << (((three%static_cast<ll>(mod)) + static_cast<ll>(mod)) % static_cast<ll>(mod));
		return 0;
	}


	if(modcheck == 4){
		cout << (((four%static_cast<ll>(mod)) + static_cast<ll>(mod)) % static_cast<ll>(mod));
		return 0;
	}


	if(modcheck == -1){
		cout << (((five%static_cast<ll>(mod)) + static_cast<ll>(mod)) % static_cast<ll>(mod));
		return 0;
	}	

	return 0; 
	
} 
