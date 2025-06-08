#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll a, b, n;
    cin >> a >> b >> n;
    bool found = false;
    
    for (int digit = 0; digit <= 9; ++digit) {
        ll x = a * 10 + digit; 
        if (x % b == 0) { 
            a = x; 
            found = true;
            cout << a; 
            break;
        }
    }
    
    if (!found) {
        cout << -1 << endl;
        return;
    }
    
    for (int i = 1; i < n; ++i) {
        cout << 0;
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
