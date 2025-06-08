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

void solve() {
    int a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;
    int count = 0;
    int suneet, slavic;

    suneet = 0;
    slavic = 0;
    if (a1 > b1) suneet++; else if (a1 < b1) slavic++;
    if (a2 > b2) suneet++; e
    lse if (a2 < b2) slavic++;
    if (suneet > slavic) count++;

    suneet = 0;
    slavic = 0;
    if (a1 > b2) suneet++; else if (a1 < b2) slavic++;
    if (a2 > b1) suneet++; else if (a2 < b1) slavic++;
    if (suneet > slavic) count++;

    suneet = 0;
    slavic = 0;
    if (a2 > b1) suneet++; else if (a2 < b1) slavic++;
    if (a1 > b2) suneet++; else if (a1 < b2) slavic++;
    if (suneet > slavic) count++;

    suneet = 0;
    slavic = 0;
    if (a2 > b2) suneet++; else if (a2 < b2) slavic++;
    if (a1 > b1) suneet++; else if (a1 < b1) slavic++;
    if (suneet > slavic) count++;

    cout << count << endl;
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
