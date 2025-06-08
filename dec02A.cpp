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
	vector<vi> nodes(n);
	FOR(i, n-1){
		int a,b; cin >> a >> b;a--; b--;
		nodes[a].PB(b);
		nodes[b].PB(a);
	}

    queue<int> q;
    vector<bool> visited(n, false);
    vector<int> distance(n, 0);

	visited[0] = true;
	q.push(0);

	int d = 0;
	int last_node = 0;

	while(!q.empty()){
		int s = q.front();
		visited[s] = true;
		q.pop();

		for(int c: nodes[s]){
			if(visited[c]) continue;
			visited[c] = true;
			distance[c] = distance[s]+1;
			q.push(c);

			if(distance[c] > d) d = distance[c]; last_node = c;
		}

	}

    queue<int> q2;
    vector<bool> visited2(n, false);
    vector<int> distance2(n, 0);

	visited2[last_node] = true;
	q2.push(last_node);

	d = 0;
	int last_node2 = 0;

	while(!q2.empty()){
		int s = q2.front();
		visited[s] = true;
		q2.pop();

		for(int c: nodes[s]){
			if(visited2[c]) continue;
			visited2[c] = true;
			distance2[c] = distance2[s]+1;
			q2.push(c);

			if(distance2[c] > d) d = distance2[c]; last_node2 = c;
		}

	}

	cout << d;

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