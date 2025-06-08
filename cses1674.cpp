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

class node{
public:
	ll value;
	vector<ll> children;
	ll total_subordinates;

	node(){
		value = -1;
		total_subordinates = 0;
	}

	node(int v){
		value = v;
		total_subordinates = 0;
	}

};

void dfs(vector<node>& bossnodes, int current) {
    for (ll child : bossnodes[current].children) {
        dfs(bossnodes, child);
        bossnodes[current].total_subordinates += 1 + bossnodes[child].total_subordinates;
    }
}

void solve() {
    int n; 
    cin >> n;
    vector<int> boss(n + 1);
    
    FORL(i, 2, n) {
        int x; cin >> x; x--;
        boss[i] = x;
    }

    vector<node> bossnodes(n);
    FOR(i, n) {
        bossnodes[i] = node(i);
    }

    FORL(i, 2, n) {
        bossnodes[boss[i]].children.PB(i - 1);
    }

    dfs(bossnodes, 0); 

    FOR(i, n) {
        cout << bossnodes[i].total_subordinates << " ";
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