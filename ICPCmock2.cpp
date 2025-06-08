#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n == 1) {
            int c, d;
            cin >> c >> d;
            if (c <= d) cout << "YES\n";
            else {
            cout << "NO\n";
            continue;
        }
        int arr[n];
        int hash[10000] = {0};
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            hash[arr[i]]++;
        }
        int b[n];
        for (int i = 0; i < n; i++) cin >> b[i];
        sort(arr, arr + n);
        sort(b, b + n);
        bool valid = true;
        for (int i = 0; i < n; i++) {
            if (hash[arr[i]] % 2 == 0 && n % 2 == 0 || hash[arr[i]] % 2 != 0 && n % 2 != 0) {
                if (arr[i] > b[i]) {
                    cout << "NO\n";
                    valid = false;
                    break;
                }
            } else {
                cout << "NO\n";
                valid = false;
                break;
            }
        }
        if (valid)  cout << "YES\n";
    }
    }
    return 0;
}