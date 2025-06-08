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
    int n, m; cin >> n >> m;
    vector<pi> govt(n), bessie(m);
    FOR(i, n) cin >> govt[i].first >> govt[i].second;
    FOR(i, m) cin >> bessie[i].first >> bessie[i].second;

    int maxover = 0;
    int i = 0, j = 0;
    int covered_govt = 0, covered_bessie = 0;

    while (i < n && j < m) {
        int min_length = min(govt[i].first - covered_govt, bessie[j].first - covered_bessie);
        if (bessie[j].second > govt[i].second) {
            maxover = max(maxover, bessie[j].second - govt[i].second);
        }

        covered_govt += min_length;
        covered_bessie += min_length;

        if (covered_govt == govt[i].first) {
            i++;
            covered_govt = 0;
        }
        if (covered_bessie == bessie[j].first) {
            j++;
            covered_bessie = 0;
        }
    }

    cout << maxover;
}

int main(){
    ios::sync_with_stdio(0); 
    cin.tie(0); 

    // freopen("speeding.in", "r", stdin);
    // freopen("speeding.out", "w", stdout);

    int t = 1; 
    while(t--){
        solve();
    }

    return 0;
}
