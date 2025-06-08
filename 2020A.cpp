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

void combine_two(vector<pair<ll, pair<ll, ll>>>& v, int l, int m, int r) {
    vector<pair<ll, pair<ll, ll>>> temp(r - l + 1);
    int i = l, j = m + 1, k = 0;

    while (i <= m && j <= r) {
        if (v[i].first <= v[j].first) {
            temp[k++] = v[i++];
        } else {
            temp[k++] = v[j++];
        }
    }
    while (i <= m) {
        temp[k++] = v[i++];
    }
    while (j <= r) {
        temp[k++] = v[j++];
    }

    for (i = l, k = 0; i <= r; i++, k++) {
        v[i] = temp[k];
    }
}

void merge_sort(vector<pair<ll, pair<ll, ll>>>& v, int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        merge_sort(v, l, m);
        merge_sort(v, m + 1, r);
        combine_two(v, l, m, r);
    }
}

void solve() {
    ll n; cin >> n;
    vector<pair<ll, ll>> arrs(n);
    map<ll, ll> changed_arrs; 
    int pointer = 1; 

    FOR(i, n) {
        cin >> arrs[i].first >> arrs[i].second;
        changed_arrs[arrs[i].first] = 0;
        changed_arrs[arrs[i].second] = 0;
    }

    for (auto entry : changed_arrs) {
        entry.second = pointer++;
    }

    vector<pair<ll, pair<ll, ll>>> arrs_order;
    FOR(i, n) {
        ll sum = changed_arrs[arrs[i].first] + changed_arrs[arrs[i].second];
        arrs_order.PB(MP(sum, arrs[i]));
    }

    merge_sort(arrs_order, 0, arrs_order.size() - 1);

    FOR(i, arrs_order.size()) {
        cout << arrs_order[i].second.first << " " << arrs_order[i].second.second << " ";
    }
}

int main() {
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
