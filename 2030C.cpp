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
    int n; cin >> n; 
    string s; cin >> s;

    bool alice = false;

    FOR(i, n) {
        if (s[i] == '1') {
            if (i == 0 || i == n-1) {
                alice = true;
                break;
            }else{
                if (i > 0) {
                    if (s[i - 1] == '1') {
                        alice = true;
                        break;
                    }
                }else if(i < n - 1) {
                    if (s[i + 1] == '1') {
                        alice = true;
                        break;
                    }
                }
            }
        }
    }   


    if(alice){
    	cout << "YES";
    	return;
    }

    cout << "NO";
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
