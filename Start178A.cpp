#include<bits/stdc++.h>
using namespace std; 
#define mod (1000000007)
#define INF INT_MAX
#define FOR(a, c) for(int(a) = 0;(a) <(c);(a)++) 
#define FORL(a, b, c) for(int(a) =(b);(a) <=(c);(a)++) 
#define FORR(a, b, c) for(int(a) =(b);(a) >=(c);(a)--) 
typedef long long int ll; 
typedef vector<int> vi; 
typedef pair<int, int> pi; 
typedef vector<string> vs;
typedef vector<char> vc;
#define PB push_back 
#define POB pop_back 
#define MP make_pair 

void solve(){
    int n, k; cin >> n >> k;
    
    if(k == 1){
        if(n == 1){
            cout << -1;
            return;
        }

        FORL(i, 1, n-1) cout << i + 1 << " ";
        cout << 1;
        return;
    }
    
    if(n<(2*k)){
        cout << -1;
        return;
    }
    
    vi p(n + 1);
    vector<vi> modvals(k);
    
    FORL(i, 1, n) modvals[i%k].PB(i);
    
    FOR(i, k){
        FOR(j, modvals[i].size()) p[modvals[i][j]] = modvals[i][(j + 1) % modvals[i].size()];
    }
    
    FORL(i, 1, n) cout << p[i] << " ";
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