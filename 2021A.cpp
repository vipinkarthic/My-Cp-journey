#include<bits/stdc++.h>
using namespace std; 

#define MOD 1000000007
#define INF INT_MAX
#define FOR(i, n) for (int (i) = 0; (i) < (n); (i)++) 
#define FORL(i, b, n) for (int (i) = (b); (i) <= (n); (i)++) 
#define FORR(i, b, n) for (int (i) = (b); (i) >= (n); (i)--) 
typedef long long int ll; 
typedef vector<int> vi; 
typedef pair<int, int> pi; 
typedef vector<string> vs;
typedef vector<char> vc;
#define PB push_back 
#define POB pop_back 
#define MP make_pair 

void solve(){
    int n; 
    cin >> n;

    vi arr(n);
    FOR(i, n){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    while(arr.size() > 1){
        int temp = (arr[0] + arr[1]) / 2;	
        arr.erase(arr.begin());
        arr.erase(arr.begin());
        arr.PB(temp);
        sort(arr.begin(), arr.end());
    }
    cout << arr[0];
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
