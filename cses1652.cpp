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
	int forest[n+1][n+1];
	int q; cin >> q;
	FORL(i, 0, n){
		FORL(j, 0, n){
			forest[i][j] = 0;
			if(i==0 || j==0) continue;
			char temp; cin >> temp;
			forest[i][j] = forest[i-1][j] + forest[i][j-1] - forest[i-1][j-1] + (temp == '*' ? 1 : 0);
		}
	}
	
	// FOR(i, n+1){
	// 	FOR(j, n+1){
	// 		cout << forest[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }

	while(q--){
		int x1,y1,x2,y2;
		cin >> x1 >> y1 >> x2 >> y2;
		cout << forest[x2][y2]-forest[x2][y1-1]-forest[x1-1][y2]+forest[x1-1][y1-1] << endl;
	}


}

int main(){
	ios::sync_with_stdio(0); 
	cin.tie(0);

	int t = 1;
	while(t--){
		solve();
		cout << "\n";
	}

	return 0;
}