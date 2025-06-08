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
    vector<vi> adj(n + 1);
    vi deg(n + 1, 0);

    for (int i = 0; i < n - 1; ++i) {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        deg[u]++;
        deg[v]++;
    }


    vi nodes(n);
    FOR(i, n){
    	nodes[i] = (i+1);
    }

    sort(nodes.begin(), nodes.end(), [&](int a, int b){
    	if(deg[a]!=deg[b]){
    		return deg[a] > deg[b];
    	}else{
    		return a < b;
    	}
    });


    FOR(i, n){
    	sort(adj[i].begin(), adj[i].end());
    }

    ll ma(0);
    ll mna(0);

    FOR(i, n){
    	int c = nodes[i];
    	FORL(j, i+1, n-1){
    		int s = nodes[j];
    		if(!binary_search(adj[c].begin(), adj[c].end()), s){
    			ll	
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