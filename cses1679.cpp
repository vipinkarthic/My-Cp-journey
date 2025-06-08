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

void solve(){
    int n, m; cin >> n >> m;
    vector<vi> edges(n);
    vi indeg(n, 0);
    FOR(i, m){
        int a, b; cin >> a >> b;a--; b--;
        edges[a].PB(b);
        indeg[b]++;
    }

    queue<int> q;
    FOR(i, n){
        if(indeg[i] == 0) q.push(i);
    }

    vi ans;
    while(!q.empty()){
        int d = q.front();
        q.pop();
        ans.PB(d);
        for(int c : edges[d]){
            indeg[c]--;
            if(indeg[c] == 0) q.push(c);
        }
    }

    if(ans.size() != n){
        cout << "IMPOSSIBLE";
        return;
    }
    
    for(int x : ans) cout << x + 1 << " ";
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