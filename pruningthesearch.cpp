#include "bits/stdc++.h" 
using namespace std; 
#define max(a, b) (a < b ? b : a) 
#define min(a, b) ((a > b) ? b : a) 
#define mod 1e9 + 7 
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++) 
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++) 
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--) 
#define INF 1000000000000000003 
typedef long long int ll; 
typedef vector<int> vi; 
typedef pair<int, int> pi; 
#define F first 
#define S second 
#define PB push_back 
#define POB pop_back 
#define MP make_pair 

extern int board[7][7];

void solve(int x,int y){
	board[x][y] = 1;
	if(board[x][y+1] || board[x+1][y]) || board[x]
	solve(x,y+1);
}

int main() 
{ 
	ios::sync_with_stdio(0); 
	cin.tie(0); 

	solve(0,0);

	return 0; 
} 
