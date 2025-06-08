#include <bits/stdc++.h>
using namespace std;

#define sz(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define INF(type) numeric_limits<type>::max()
#define FOR(i, n) for (int i = 0; (i) < (n); (i)++)

using ll = long long;
using ld = long double;
using vint = vector<int>;
using pint = pair<int, int>;

void solve() {
        int n; cin >> n;
        string s, t; cin >> s >> t;

        vint t1, t2;
        FOR(i, n){
                if(s[i] != t[i]){
                        if(s[i] == 'a' && t[i] == 'b') t1.push_back(i + 1);
                        else if(s[i] == 'b' && t[i] == 'a') t2.push_back(i + 1);
                }
        }

        if((sz(t1) & 1) != (sz(t2) & 1)){
            cout << -1;
            return;
        }

        vector<pint> ans;

        for(int i = 0; i < sz(t1) -1; i+=2){
                ans.push_back({t1[i], t1[i+1]});
        }

        for(int i = 0; i < sz(t2) -1; i+=2){
                ans.push_back({t2[i], t2[i+1]});
        }

        if(sz(t1) % 2 == 1 && sz(t2) % 2 == 1){
                ans.push_back({t1.back(), t1.back()});
                ans.push_back({t1.back(), t2.back()});
        }

        cout << sz(ans) << endl;
        for(auto op : ans){
                cout << op.first << " " << op.second << endl;
        }

}

int main() {
        ios_base::sync_with_stdio(false); cin.tie(nullptr);
        int T = 1;
        // cin >> T;
        while (T--) {
                solve();
        cout << "\n";
        }
        return 0;
}