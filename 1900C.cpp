#include <iostream>
#include <vector>

using namespace std;

void dfs(int node, string &s, vector<int> &l, vector<int> &r, int &operations, bool &leafFound) {
    if (l[node] == 0 && r[node] == 0) {
        leafFound = true;
        return;
    }

    if (s[node] == 'L' && l[node] != 0) {
        dfs(l[node], s, l, r, operations, leafFound);
    }

    if (s[node] == 'R' && r[node] != 0) {
        dfs(r[node], s, l, r, operations, leafFound);
    }

    if (!leafFound && s[node] != 'U') {
        operations += 1;
        s[node] = 'U';
    }
}

int minOperations(int n, string &s, vector<int> &l, vector<int> &r) {
    int operations = 0;
    bool leafFound = false;

    dfs(0, s, l, r, operations, leafFound);

    return operations;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        vector<int> l(n);
        vector<int> r(n);

        for (int i = 0; i < n; i++) {
            cin >> l[i] >> r[i];
        }

        int operations = minOperations(n, s, l, r);
        cout << operations << endl;
    }

    return 0;
}
