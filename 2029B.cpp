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
    int n; string s, r;
    cin >> n >> s >> r; 
    stack<char> st;
    int p = 0; 
    FOR(i, s.length()){
        st.push(s[i]); 
        while(st.size() >= 2 && p < r.length()) {
            char top1 = st.top(); st.pop();
            char top2 = st.top(); st.pop();
            if(top1 != top2) {
                st.push(r[p]);
                p++;
            }else{
                st.push(top2);
                st.push(top1);
                break;
            }
        }
    }
    
    if(p == n-1 && st.size() == 1) {
        cout << "YES";
    } else {
        cout << "NO";
    }
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