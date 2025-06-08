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

vi mod_perm(vi &p, int r){
    int n = p.size();
    vi new_arr;
    FORL(i, r+1, n-1) new_arr.PB(p[i]); //r to n-1
    int l(r);

    while(l > 0 && p[l - 1] > p[0]) l--; //large l

    FORR(i, r, l) new_arr.PB(p[i]); //l to r 
    FOR(i, l) new_arr.PB(p[i]); //0 to l-1

    return new_arr;
}

void solve(){
    int n; cin >> n;
    vi p(n);
    FOR(i, n) cin >> p[i];
    
    vi bestnew_arr = mod_perm(p, n-1); 
    int new_r = (max_element(p.begin()+1, p.end()) - p.begin()) - 1;
    
    if(new_r != n - 1){
        vi perm_2 = mod_perm(p, new_r);

        int grtr(0);
        int m = perm_2.size();
        FOR(i, m){
            if(perm_2[i]!=bestnew_arr[i]){
                grtr = (perm_2[i] > bestnew_arr[i]);
            }
        }

        if(grtr) bestnew_arr = perm_2;
    }
    
    FOR(i, bestnew_arr.size()) cout << bestnew_arr[i] << " ";
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
