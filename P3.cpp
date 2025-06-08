#include<bits/stdc++.h>
typedef long long int ll; 

using namespace std;

bool check(ll n) {
    return (sqrt(n) == ll(sqrt(n))); 
}

int main() {
    ll t; 
    cin >> t;
    while (t--) {
        ll n; 
        cin >> n;
        ll arr[n];
        ll sum = 0;
        for (ll i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }
        if (check(sum)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
