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

	ll n; cin >> n;
	ll orginal[n];
	FOR(i,n){
		cin >> orginal[i];
	}

	ll m; cin >> m;
	ll qries[m+1];
	FOR(j,m){
		cin >> qries[j];
	}
	ll cv(0),cp(0);
	FOR(i,m){
		ll query = qries[i];
		for(int j = 0; j < n; j++){
			cv++;
			if(orginal[j] == query){
				break;
			}
		}
		FORR(k,n,0){
			cp++;
			if(orginal[k] == query){
				break;
			}
		}
	}
	cout << cv << " " << cp-(m*1) <<endl;

} 
