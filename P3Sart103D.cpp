#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        vector<char> bob;
        vector<char> alex;

        for (int i = 0; i < 6; i++) {
            char c;
            cin >> c;
            if (i < 3) {
                alex.push_back(c);
            } else {
                bob.push_back(c);
            }
        }

        sort(bob.begin(), bob.end(), greater<int>());
        sort(alex.begin(), alex.end(), greater<int>());

        string lbob = string(bob.begin(), bob.end());
        string lalex = string(alex.begin(), alex.end());

        int int_largest_bob = stoi(lbob);
        int int_largest_alex = stoi(lalex);

        if (int_largest_bob > int_largest_alex) {
            cout << "Bob" <<endl;
        } else if (int_largest_alex > int_largest_bob) {
            cout << "Alice" <<endl;
        } else {
            cout << "Tie" << endl;
        }
    }

    return 0;
}
