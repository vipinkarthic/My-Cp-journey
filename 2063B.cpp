#include<bits/stdc++.h>
using namespace std; 
#define mod (1000000007)
#define INF INT_MAX
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++) 
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++) 
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--) 
typedef long long int ll; 
typedef vector<int> vi;
typedef vector<long long int> vll;
typedef pair<int, int> pi; 
typedef vector<string> vs;
typedef vector<char> vc;
#define PB push_back 
#define POB pop_back 
#define MP make_pair 

void solve(){
    ll n, l, r; cin >> n >> l >> r;
    vll num(n);
    FOR(i, n) cin >> num[i];

    vll p(num.begin(), num.begin()+r);
    sort(p.begin(), p.end());
    ll psum = accumulate(p.begin(), p.begin() + (r-l+1), 0LL);


    vll s(num.begin() + l - 1, num.end());
    sort(s.begin(), s.end());
    ll ssum = accumulate(s.begin(), s.begin() + (r-l+1), 0LL);

    cout << min(psum, ssum);
}

int main(){
    ios::sync_with_stdio(0); 
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        solve();
        cout << "\n";
    }

    return 0;
}