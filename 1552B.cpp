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
	vector<vi> athlete_positions(n, vi(5));
	FOR(i, n){
		FOR(j, 5){
			cin >> athlete_positions[i][j];
		}	
	}

	for(vi x: athlete_positions){
		for(int p : x){
			cout << p << " ";
		}
		cout << endl;
	}

	vector<vector<pi>> races(5);

	FOR(i, 5){
		FOR(j, n){
			races[i].PB(MP(athlete_positions[j][i], j));
			// cout << athlete_positions[i][j] << " ";
		}
	}

	FOR(i, 5){
		sort(races[i].begin(), races[i].end());
	}

	FOR(i, 5){
		cout << "Race " << i << " : ";
		FOR(j, races[i].size()){
			cout << races[i][j].second+1 << ", ";
		}
		cout << endl;
	}

	// if any athlete is placed first 3 times or more then he's the winner else output -1
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