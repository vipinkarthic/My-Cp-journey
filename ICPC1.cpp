#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int c = 0;
        int j = 0;

        for (int i = 0; i < k; i++) {
            if (j % 2 == 0) {
                if (s[i] == 'U') c++;
                if (s[i] == 'R') {
                    c--;
                    j++;
                }
                if (s[i] == 'S') c += 2;
            } else {
                if (s[i] == 'U') c--;
                if (s[i] == 'R') {
                    c++;
                    j++;
                }
                if (s[i] == 'S') c -= 2;
            }
        }

        if (c >= n) {
            c = c % n;
        } else if (c < 0) {
            c = abs(c) % n;
            c = (n - c) % n;
        }

        cout << c + 1 << "\n";
    }

    return 0;
}