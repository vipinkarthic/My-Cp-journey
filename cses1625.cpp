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

string s;
ll ans(0);
vector<vi> visited(7, vi(7, 0));

void pathfind(int x, int y, int i){
	if(x==6 && y ==0){
		if(i == 48) ans++;
		return;
	}

	if(i == 48) return;

	// block down || block up || path split 
	if(((y > 0) && (y < 6)) && (x==6 || visited[x+1][y]) && (!(x) || visited[x-1][y]) && (!visited[x][y-1] && !visited[x][y+1])) return;
	if(((x > 0) && (x < 6)) && (y==6 || visited[x][y+1]) && (!(y) || visited[x][y-1]) && (!visited[x+1][y] && !visited[x-1][y])) return;


	// move up, down, left, right
	visited[x][y] = 1;
	if(s[i] == '?'){
	    int d[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
	    FOR(j, 4){
	        int r(x+d[j][0]), c(y+d[j][1]);
	        //send->
	        if(r >= 0 && r < 7 && c >= 0 && c < 7 && !visited[r][c]) pathfind(r, c, i+1);
	    }
	}else{
		int r(x + (s[i]=='D') - (s[i] == 'U')), c(y + (s[i]=='R') - (s[i]=='L'));
		// send ->
	    if(r >= 0 && r < 7 && c >= 0 && c < 7 && !visited[r][c]) pathfind(r, c, i+1);
	}

	visited[x][y] = 0;
}


void solve(){
	// L U R D - ?
	cin >> s;
	pathfind(0, 0, 0);
	cout << ans;
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