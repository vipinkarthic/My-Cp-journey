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

int prime(int x){
    if (x <= 1) return 0;

    for (int a = 2; a* a<= x; a++) {
        if (x % a == 0) return 0;
    }

    return 1;
}

void solve(){
	int x, k; cin >> x >> k;
	if(x == 1){
		if(k == 1 || k > 2) cout << "NO";
		else cout << "YES";
		return;
	}

	if(k == 1){
		if(prime(x)) cout << "YES";
		else cout << "NO";
	}else{
		if(x > 1) cout << "NO";
		else cout << "YES";
	}


}

int main(){
	ios::sync_with_stdio(0); 
	cin.tie(0);

	int t;
	cin >> t;
	while(t--){
		solve();
		cout << "\n";
	}

	return 0;
}