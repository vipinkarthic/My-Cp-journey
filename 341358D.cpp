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
	int points[n][n];
	
	FOR(i, n){
		FOR(j, n) points[i][j] = -2;
	}	

	if(n&1){
		int wc(n/2);
		FOR(i, n){
			int temp(0);
			FOR(j, n){
				if(j <= i) continue;
				if(temp < wc){
					points[i][j] = 1;
					temp++;
				}else{
					points[i][j] = -1;
				}
			}
		}
	}else{
		// solve for odd number of matches to be played
		// if n is odd then mark the ith and the i + n/2 th
		FOR(i, n/2){
			points[i][int(i + (n/2))] = 0;
		}

		FOR(i, n){
			int tip(0);
			FOR(j, n){
				if(j <= i) continue;
				if(!points[i][j]){
					tip = 1;
					continue;
				}

				if(!tip) points[i][j] = 1;
				else points[i][j] = -1;
			}
		}
	}

	FOR(i, n){
		FOR(j, n){
			if(j <= i) continue;
			cout << points[i][j] << " ";
		}
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