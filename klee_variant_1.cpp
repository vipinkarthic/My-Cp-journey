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
	vector<pair<int,bool>> coords(2*n);

	FOR(i,n){
		int a; int b; cin >> a >> b;
	
		coords[i*2] = MP(a, false);
		coords[i*2 + 1] = MP(b, true);
	}

	sort(coords.begin(), coords.end());

	int count = 0;
	int distance = 0;

	FOR(i,2*n){
		if(count){
			distance += coords[i].first - coords[i-1].first;
		}

		if(coords[i].second){
			count--;
		}else{
			count++;
		}
	}

	cout << distance;
	
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