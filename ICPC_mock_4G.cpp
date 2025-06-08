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

int n = 19;
vector<vi> board(n, vi(n));
vector<vi> visited(n, vi(n));
vector<vi> temp_visited(n, vi(n));

int dx[4] = {-1, +1, 0, 0};
int dy[4] = {0, 0, -1, +1};

void bfs(int ir, int ic, int type, vector<pi>&coins, int &count){
	while(!coins.empty()) coins.pop_back();
	count = 0;
	queue<pi> q;
	q.push(MP(ir, ic));
	visited[ir][ic] = 1;

	vector<vi> temp_check(n, vi(n, 0));

	while(!q.empty()){
		int x(q.front().first), y(q.front().second);
		q.pop();
		coins.PB(MP(x, y));

		FOR(i, 4){
			int xx = x+dx[i];
			int yy = y+dy[i];

			if(xx < 0 || xx >= n || yy < 0 || yy >= n) continue;

			if(!board[xx][yy]){
				if(!temp_check[xx][yy]){
					temp_check[xx][yy] = 1;
					count++;
				}
			}else{
				if(board[xx][yy] == type && !visited[xx][yy]){
					visited[xx][yy] = 1;
					q.push(MP(xx, yy));
				}
			}
		}	
	}

	FOR(i, coins.size()) visited[coins[i].first][coins[i].second] = 0;
}



void solve(){
	FOR(i, n){
		FOR(j, n) board[i][j] = 0;
	}

	int m; cin >> m;
	int bt(1);	

	vector<pi> temp;
	int count;

	FOR(i, m){
		int x, y; cin >> x >> y; x--; y--;

		int type1, type2;
		if(bt) type1 = 1, type2 = 2;
		else type1 = 2, type2 = 1;

		bt = !bt;

		board[x][y] = type1;

		FOR(k, n){
			FOR(j, n){
				temp_visited[k][j] = 0;
			}
		}
		int deleted(0);

		FOR(j, 4){
			int xx = x+dx[j];
			int yy = y+dy[j];

			if(xx < 0 || xx >= n || yy < 0 || yy >= n) continue;

			if(board[xx][yy] != type2) continue;
			if(temp_visited[xx][yy]) continue;

			temp_visited[xx][yy] = 1;
			bfs(xx, yy, type2, temp, count);

			FOR(k, temp.size()) temp_visited[temp[k].first][temp[k].second] = 1;

			if(!count){
				FOR(k, temp.size()) board[temp[k].first][temp[k].second] = 0;
				deleted+=temp.size();
			}
		}

		bfs(x, y, type1, temp, count);
		int deleted2(0);
		if(!count){
			FOR(k, temp.size()) board[temp[k].first][temp[k].second] = 0;
			deleted2+=temp.size();
		}

		if(type1==1) cout << deleted2 << " " << deleted << endl;
		else cout << deleted << " " << deleted2 << endl;
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