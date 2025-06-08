#include<bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
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
 
void solve(int n){
    ll sum = (n * (n + 1)) / 2;
    if(sum % 2 == 0){
        cout << "YES" << endl;
        vi set1, set2;
        ll half_sum = sum / 2;
 
        FORR(i, n, 1){
            if(half_sum >= i) {
                set1.PB(i);
                half_sum -= i;
            } else {
                set2.PB(i);
            }
        }
 
        cout << set1.size() << endl;
        for(int num : set1) {
            cout << num << " ";
        }
        cout << endl;
 
        cout << set2.size() << endl;
        for(int num : set2) {
            cout << num << " ";
        }
        cout << endl;
    } else {
        cout << "NO" << endl;
    }
}
 
int main(){
    ios::sync_with_stdio(0); 
    cin.tie(0);
 
    int t;
    cin >> t;
    solve(t);
 
    return 0;
}