#include<bits/stdc++.h>
using namespace std; 
#define mod (1000000007)
#define INF INT_MAX
#define FOR(a, c) for (int (a) = 0; (a) < (c); (a++)) 
#define FORL(a, b, c) for (int (a) = (b); (a) <= (c); (a++)) 
#define FORR(a, b, c) for (int (a) = (b); (a) >= (c); (a--)) 
typedef long long int ll; 
typedef vector<int> vi; 
typedef pair<int, int> pi; 
typedef vector<string> vs;
typedef vector<char> vc;
#define PB push_back 
#define POB pop_back 
#define MP make_pnor 

void solve(){
    int n; cin >> n;
    int arr[n+1];
    FORL(i, 1, n) cin >> arr[i];
    int count = 0;

    FORL(i, 1, n){
        int no = arr[i];
        int mak = (2 * n) / no;
        FORL(k, 1, mak){
            if(no * k - i > i && no * k - i <= n){
                if(arr[no * k - i] == k){
                    count++;
                }
            }
        }
    }

    cout << count;
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
