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

bool iterative(int num) {
    int sum = 0;
    FORL(i, 1, num) {
        sum += i;
        if (sum == num) return true;
        if (sum > num) break;
    }
    return false;
}
bool quad(int num) {
    double delta = 1 + 8 * num;
    double n = (-1 + sqrt(delta)) / 2;
    return n == (int)n;
}

void solve() {
    int num; 
    cin >> num; 
    bool iter = iterative(num);
    cout << (iter ? "True" : "False");
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    int t = 1;
    while(t--) {
        solve();
        cout << "\n";
    }

    return 0;
}
