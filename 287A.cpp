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
	char points[4][4];

	FOR(i, 4){
		FOR(j, 4){
			cin >> points[i][j];
		}
	}

	bool is_square_formable = false;

	FOR(i, 3){
		FOR(j, 3){
			if(points[i][j] == '.'){
				if(points[i+1][j] == '#' and points[i][j+1] == '#' and points[i+1][j+1] == '#'){
					is_square_formable = true;
					break;
				}
			}else{
				if((points[i+1][j] == '#' and points[i][j+1] == '#') or (points[i+1][j] == '#' and points[i+1][j+1] == '#') or (points[i][j+1] == '#' and points[i+1][j+1] == '#')) {
					is_square_formable = true;
					break;
				}
			}
		}
		if(is_square_formable) break;
	}

	FOR(i, 3){
		FOR(j, 3){
			if(points[i][j] == '#'){
				if(points[i+1][j] == '.' and points[i][j+1] == '.' and points[i+1][j+1] == '.'){
					is_square_formable = true;
					break;
				}
			}else{
				if((points[i+1][j] == '.' and points[i][j+1] == '.') or (points[i+1][j] == '.' and points[i+1][j+1] == '.') or (points[i][j+1] == '.' and points[i+1][j+1] == '.')) {
					is_square_formable = true;
					break;
				}
			}
		}
		if(is_square_formable) break;
	}

	if(is_square_formable) cout << "YES";
	else cout << "NO";
	
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