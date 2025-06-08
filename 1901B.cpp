#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    ll ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans += max(0ll, a[i] - a[i - 1]);
    }
    cout << ans - 1 << endl;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}