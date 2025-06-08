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
	ll n, x, k; cin >> n >> x >> k;
	string s; cin >> s;
	vi pos(n+1, 0);

	FORL(i, 1, n){
		int d = 1;
		if(s[i-1] == 'L') d = -1;
		pos[i] = pos[i-1] + d;
	}

	ll count(0), tzer(-1);

	FORL(i, 1, n){
		if(!(x+pos[i])){
			tzer = i;
			break;
		}
	}

	if(tzer!=-1 && tzer<=k){
		count++;
		k-=tzer;

		ll temp(-1);
		FORL(i, 1, n){
			if(!pos[i]){
				temp = i;
				break;
			}
		}

		if(temp!=-1){
			count += k/temp;
		}
	}

	cout << count;

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