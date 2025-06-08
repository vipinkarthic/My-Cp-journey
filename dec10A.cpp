#include <bits/stdc++.h>
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

const int dx[] = {-1, 1, 0, 0}; // U, D, L, R
const int dy[] = {0, 0, -1, 1};
const char directions[] = {'U', 'D', 'L', 'R'};

vector<vector<bool>> visited;
vector<vector<char>> moveDir;
vector<vector<pi>> parent;
string resultPath;
bool found = false;
pi start, destination;
int n, m;

void recursive_bfs(queue<pi>& q, const vector<vector<char>>& lab) {
    if (q.empty() || found) return;

    pi current = q.front();
    q.pop();

    int x = current.first, y = current.second;
    if (x == destination.first && y == destination.second) {
        found = true;
        return;
    }

    FOR(i, 4) {
        int nx = x + dx[i], ny = y + dy[i];
        if (nx >= 0 && nx < n && ny >= 0 && ny < m && !visited[nx][ny] && lab[nx][ny] != '#') {
            visited[nx][ny] = true;
            moveDir[nx][ny] = directions[i];
            parent[nx][ny] = {x, y};
            q.push({nx, ny});
        }
    }

    recursive_bfs(q, lab);
}

void solve() {
    cin >> n >> m;
    vector<vector<char>> lab(n, vector<char>(m));
    FOR(i, n) {
        FOR(j, m) {
            cin >> lab[i][j];
            if (lab[i][j] == 'A') start = {i, j};
            if (lab[i][j] == 'B') destination = {i, j};
        }
    }

    visited.assign(n, vector<bool>(m, false));
    moveDir.assign(n, vector<char>(m, ' '));
    parent.assign(n, vector<pi>(m, {-1, -1}));

    queue<pi> q;
    q.push(start);
    visited[start.first][start.second] = true;
    recursive_bfs(q, lab);

    if (found) {
        cout << "YES\n";
        string path = "";
        for (pi cur = destination; cur != start; cur = parent[cur.first][cur.second]) {
            path += moveDir[cur.first][cur.second];
        }
        reverse(path.begin(), path.end());

        cout << path.size() << "\n";
        cout << path << "\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    int t = 1;
    while(t--) {
        solve();
        cout << "\n";
    }

    return 0;
}
