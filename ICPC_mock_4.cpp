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
        string s; cin >> s;

        int lqc(0), rqc(0), ls(0), rs(0);

        FOR(i, n/2){
                if(s[i] == '?') lqc++;
                else ls += s[i] - '0';
        }

        for(int i =(n/2); i < n; i++){
                if(s[i] == '?') rqc++;
                else rs += s[i] - '0';
        }

        if(2 *(ls - rs) == 9 * -1 *(lqc - rqc)) cout << "Bicarp";
        else cout << "Monocarp";
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