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
	int n = 8;
	char board[8][8];
	char ans[8][8];
	FOR(i, n){
		FOR(j, n){
			cin >> board[i][j];
			ans[i][j] = board[i][j];
		}
	}


	FOR(i, n){
		FOR(j, n){
			if(board[i][j] == 'k'){
				int l(i), r(j);
				while(l>=0 && r>=0){
					ans[l][r] = '*';
					l--;r--;
				}
				l = i; r = j;
				while(l<=7 && r <= 7){
					ans[l][r] = '*';
					l++;r++;
				}
				l = i; r = j;
				while(l<=7 && r >=0){
					ans[l][r] = '*';
					l++; r--;
				}
				l = i; r = j;
				while(l>=0 && r<=7){
					ans[l][r] = '*';
					l--; r++;
				}
				int x(i), y(j);
				if(x-2 >= 0 && y-1 >=0){
					ans[i-2][j-1] = '*';
				}
				if(x-2 >= 0 && y+1<= 7){
					ans[i-2][j+1] = '*';
				}
				if(x+2 <= 7 && y-1 >=0){
					ans[i+2][j-1] = '*';
				}
				if(x+2 <= 7 && y+1<= 7){
					ans[i+2][j+1] = '*';
				}
				x = j; y = i;
				if(x-2 >= 0 && y-1 >=0){
					ans[y-1][x-2] = '*';
				}
				if(x-2 >= 0 && y+1<= 7){
					ans[y+1][x-2] = '*';
				}
				if(x+2 <= 7 && y-1 >=0){
					ans[y-1][x+2] = '*';
				}
				if(x+2 <= 7 && y+1<= 7){
					ans[y+1][x+2] = '*';
				}
			}
		}
	}


	ll r = 0;
	FOR(i, n){
		FOR(j, n){
			if(ans[i][j] == '*') r++;
		}
	}
	cout << 64-r;
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