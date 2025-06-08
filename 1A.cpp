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
    string a, b; 
    cin >> a >> b;
    int n = a.size();
    int m = b.size();
    int ans = m;
    FOR(start, m) {
        int matches = 0;
        FOR(j, n) {
            if (start + matches < m && a[j] == b[start + matches]) {
                matches++;
                if (matches + start == m){
                    ans = min(ans, start);
                    break;
                }
            }
        }
        ans = min(ans, m - matches + start);
    }

    cout << ans + n;
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