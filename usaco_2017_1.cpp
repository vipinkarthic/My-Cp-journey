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
	int x, y; cin >> x >> y;
	int dist(0), cp(x), s(1);
	while(1){
		int next = x + s;
		if(min(cp, next) <= y && y <= max(cp, next)){
			dist += abs(y-cp); break;
		}else{
			dist += abs(next-cp);
			cp = next; s *= -2;
		}
	}
	cout << dist;
}

int main(){
	ios::sync_with_stdio(0); 
	cin.tie(0);

	freopen("lostcow.in", "r", stdin);
	freopen("lostcow.out", "w", stdout);

	int t = 1;
	while(t--){
		solve();
		cout << "\n";
	}

	return 0;
}