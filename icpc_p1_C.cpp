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

void solve(){
    int n; string s;
    cin >> n >> s;
    vi ps(n+1, 0);
    int rg(0);
    FOR(i, n) {
        rg += s[i] - '0';
        ps[n - 1 - i] = rg;
    }

    string total_time;
    int carry = 0;
    FOR(i, n) {
        carry += ps[i];
        total_time.PB('0' + (carry % 10));
        carry /= 10;
    }
    if(carry) total_time.PB('0' + carry);

    int first_nz(0);
    FORR(i, total_time.length() - 1, 0) {
        if(!first_nz && total_time[i] == '0') continue;
        first_nz = 1;
        cout << total_time[i];
    }
    if (!first_nz) cout << '0';

}

int main(){
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