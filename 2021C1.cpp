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
    int n, m, q; 
    cin >> n >> m >> q;
    vi order(n);
    FOR(i, n) cin >> order[i];
    vi allotment(m);
    FOR(i, m) cin >> allotment[i];
    
    vi pres_order;
    vi finshed(n+1, 0);
    FOR(i, m){
        if(!finshed[allotment[i]]){
            pres_order.PB(allotment[i]);
            finshed[allotment[i]] = 1;
        }
    }
    int presenter = 0;
    FOR(i, n){
        if(presenter < pres_order.size() ){
        	if(order[i] == pres_order[presenter]) presenter++;
        }
        if(presenter == pres_order.size()) break;
    }
    if(presenter == pres_order.size()) cout << "YA";
    else cout << "TIDAK";
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
