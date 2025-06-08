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
    int n; cin >> n;
    int freq[2*n+1] = { 0 }; 
    int cnt[2*n+1] = { 0 };   
    vector<pi> v(n);
    
    FOR(i, n){
        int l, r; cin >> l >> r;
        v[i] = MP(l, r);
        if(l == r) {
            freq[l] = 1;  
            cnt[l]++;     
        }
    }
    
    FORL(i, 2, 2*n){
        freq[i] += freq[i-1];
    }
    
    FOR(i, n){
        int l = v[i].first;
        int r = v[i].second;
        
        if(l == r){
            cout << (cnt[l] <= 1 ? "1" : "0");
        }else{
            cout << (freq[r] - freq[l-1] < r - l + 1 ? "1" : "0");
        }
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