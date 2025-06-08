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

vi bfs(int start, vector<vector<ll>>& edges) {
    int n = edges.size();
    vi distance(n, -1);
    queue<int> q;

    q.push(start);
    distance[start] = 0;
    int farthest_node = start;

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        for (int neighbor : edges[node]) {
            if (distance[neighbor] == -1) {
                distance[neighbor] = distance[node] + 1;
                q.push(neighbor);

                if (distance[neighbor] > distance[farthest_node]) {
                    farthest_node = neighbor;
                }
            }
        }
    }

    return distance;
}

int find_max(vi &vec){
	return distance(vec.begin(), max_element(vec.begin(), vec.end()));
}

void solve(){
	int n; cin >> n;
	vector<vector<ll>> edges(n);
	FOR(i, n-1){
		int a, b; cin >> a >> b; a--; b--;
		edges[a].PB(b);
		edges[b].PB(a);
	}

	vi distances1 = bfs(0, edges);
	vi distances2 = bfs(find_max(distances1), edges);
	vi distances3 = bfs(find_max(distances2), edges);

	int diameter_start = find_max(distances1);
	int diameter_end = find_max(distances2);

	FOR(i, n){
		cout << max(distances2[i], distances3[i]) << " ";
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