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

void solve() {
    int n, m;
    cin >> n >> m;

    vector<vi> adjs(n);
    FOR(i, m) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        adjs[a].PB(b);
        adjs[b].PB(a);
    }
    priority_queue<pi, vector<pi>, greater<pi>> q;
    vi distance(n, INF);
    vi parent(n, -1);
    vector<bool> visited(n, false);

    int start = 0;
    int end = n - 1;

    distance[start] = 0;
    q.push({0, start});

    while (!q.empty()) {
        int d = q.top().first;
        int s = q.top().second;
        q.pop();

        if (visited[s]) continue;
        visited[s] = true;

        for (int c : adjs[s]) {
            if (distance[s] + 1 < distance[c]) {
                distance[c] = distance[s] + 1;
                parent[c] = s;
                q.push({distance[c], c});
            }
        }
    }

    if (distance[end] == INF) {
        cout << "IMPOSSIBLE";
    } else {
        cout << distance[end] + 1 << "\n";
        vi path;
        for (int node = end; node != -1; node = parent[node]) {
            path.PB(node + 1);
        }
        reverse(path.begin(), path.end());
        for (int node : path) {
            cout << node << " ";
        }
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