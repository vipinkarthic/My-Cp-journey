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
	ll weight;

	node(int v, int w){
		value = v;
		weight = w;
	}

};

void solve() {
    ll n, m;
    cin >> n >> m;
    vector<vector<node>> edges(n);

    FOR(i, m) {
        ll a, b, c;
        cin >> a >> b >> c; a--; b--;
        edges[a].PB(node(b, c));
    }

    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> q;
    vector<ll> distance(n, LLONG_MAX);
    distance[0] = 0;
    q.push({0, 0});

    while (!q.empty()) {
        ll d = q.top().first;
        ll s = q.top().second;
        q.pop();

        if (d > distance[s]) continue;

        for (node c : edges[s]) {
            if (distance[s] + c.weight < distance[c.value]) {
                distance[c.value] = distance[s] + c.weight;
                q.push({distance[c.value], c.value});
            }
        }
    }

    for (ll d : distance) {
        cout << d << " ";
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