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

ll primearray[1000000] = { 0 };

//sieve of erathosenes
void primecheck(){
	for(ll i = 2; i<=1000000 ;i++){
		if(primearray[i] == 0){
			for(ll j = i*i;j<=1000000;j+=i){
				primearray[j] =1 ;
			}
		}
	}
	
}

bool squarecheck(ll x){
	long long int square = sqrt(x);
	if(square*square == x){
		return true;
	}else{
		return false;
	}
}

int main() 
{ 
	ios::sync_with_stdio(0); 
	cin.tie(0); 

	primecheck();
	*(primearray+1) = 1;
	int n; cin >> n;
	ll arr[n];
	FOR(i,n) cin >> arr[i];
	FOR(i,n){
		ll x = arr[i];

		//cannot be even square 
	
        if(!squarecheck(x)){
        	cout << "NO" << endl;
        }else{
        	ll root = sqrt(x);
        	if(primearray[root] == 0){
        		cout << "YES" << endl;
        	}else{
        		cout << "NO" << endl;
        	}
        }
    }
	return 0; 
} 
