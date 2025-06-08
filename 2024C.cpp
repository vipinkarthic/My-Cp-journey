#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define PB push_back
#define MP make_pair

void solve() {
    ll numPairs;
    cin >> numPairs;

    vector<pair<ll, ll>> pairs(numPairs);
    set<ll> uniqueValues;
    for (auto& pr : pairs) {
        cin >> pr.first >> pr.second;
        uniqueValues.insert(pr.first);
        uniqueValues.insert(pr.second);
    }
    unordered_map<ll, ll> compress;
    ll index = 1; 
    for (auto value : uniqueValues) {
        compress[value] = index++;
    }

    vector<pair<ll, pair<ll, ll>>> compressedPairs;
    for (auto& pr : pairs) {
        ll firstCompressed = compress[pr.first];
        ll secondCompressed = compress[pr.second];
        ll sum = firstCompressed + secondCompressed;
        compressedPairs.PB(MP(sum, MP(pr.first, pr.second)));
    }

    sort(compressedPairs.begin(), compressedPairs.end(), 
        [](const pair<ll, pair<ll, ll>>& a, const pair<ll, pair<ll, ll>>& b) {
            return a.first < b.first;
        });

    for (auto& cp : compressedPairs) {
        cout << cp.second.first << " " << cp.second.second << " ";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << "\n";
    }

    return 0;
}
