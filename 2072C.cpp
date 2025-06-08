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

void solve(){
	int n, x; cin >> n >> x;
	int highest(n+1);
	int val(0);
	
	FOR(i, n+2){
		if(i & (~x)) highest = min(highest, i);	
	}	

	if(n==1){
		cout << x;
		return;
	}

	cout << highest << " ";

	FORR(i, n, 0){
		if(i > highest) continue;
		int allowed;

		if(i==0) allowed = 0;
		else allowed = (1 << (32 - __builtin_clz(i))) - 1;

		if(allowed == x){
			val = i; 
			break;
		}else if(i+1 <= n){
			val = i;
			break;
		}
	}

	cout << val;

	
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