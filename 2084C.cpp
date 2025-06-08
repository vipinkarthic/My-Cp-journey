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
	int n; cin >> n;
	vi a(n), b(n);
	FOR(i, n) cin >> a[i];
	FOR(i, n) cin >> b[i];

	map<pi, vi> p;
	FOR(i, n) p[MP(a[i], b[i])].PB(i);

	for(pair<pi, vi> i : p){
		int a(i.first.first), b(i.first.second);
		if(a!=b){
			if(!p.count(MP(b, a)) || i.second.size() != p[MP(b, a)].size()) {
			    cout << -1;
			    return;
			}
		}else{
			if(!(n%2)){
				if((i.second.size())){
					cout << -1;
					return;
				}
			}
		}
	}

	for(pair<pi, vi> j : p){
		if(j.first.first == j.first.second %% j.second.size()%2){
			cout << -1;
			return;
		}
	}

	vi ans(n);
	vector<pi> steps;
	vi same;
	int i(0);
	for(pair<pi, vi> j : p){
		int a(i.first.first), b(i.first.second);
		if(a==b) same.PB(i);	
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