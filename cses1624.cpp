#include <bits/stdc++.h>
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

void recursion_solve(vs &board, int r, vi &is_queen, vi &diag1, vi &diag2, int &ans) {
    if (r == 8) {
        ans++;
        return;
    }    

    FOR(c, 8) {
        if (board[r][c] == '*' || is_queen[c] || diag1[8 + (r - c)] || diag2[r + c]) continue;

        is_queen[c] = 1;
        diag1[8 + (r - c)] = 1;
        diag2[r + c] = 1;

        recursion_solve(board, r + 1, is_queen, diag1, diag2, ans);

        is_queen[c] = 0;
        diag1[8 + (r - c)] = 0;
        diag2[r + c] = 0;
    }
}

void solve() {
    vs board(8);
    FOR(i, 8) cin >> board[i];

    vi is_queen(8, 0);
    vi diag1(16, 0);
    vi diag2(16, 0);

    int ans = 0;

    recursion_solve(board, 0, is_queen, diag1, diag2, ans);

    cout << ans;
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    int t = 1;
    while (t--) {
        solve();
        cout << "\n";
    }

    return 0;
}
