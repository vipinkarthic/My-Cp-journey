// #include<bits/stdc++.h>
// using namespace std; 
// #define mod (1000000007)
// #define INF INT_MAX
// #define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++) 
// #define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++) 
// #define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--) 
// typedef long long int ll; 
// typedef vector<int> vi; 
// typedef pair<int, int> pi; 
// typedef vector<string> vs;
// typedef vector<char> vc;
// #define PB push_back 
// #define POB pop_back 
// #define MP make_pair 

// void solve(){
// 	int n, k; cin >> n >> k;

// 	if(n < k+1){
// 		cout << -1 << " " << -1;
// 		return;
// 	}
	
// }

// int main(){
// 	ios::sync_with_stdio(0); 
// 	cin.tie(0);

// 	int t;
// 	cin >> t;
// 	while(t--){
// 		solve();
// 		cout << "\n";
// 	}

// 	return 0;
// }

#include <bits/stdc++.h>
using namespace std;

// Helper function to compute gcd
long long gcd_ll(long long a, long long b) {
    while(b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

void solve() {
    long long N, K;
    cin >> N >> K;
    
    // If it's impossible to have a difference of at least K
    if(N < K + 1) {
        cout << -1 << " " << -1;
        return;
    }
    
    // We try two candidate values for a: N and N-1.
    for (int candidate_a : { (int)N, (int)N - 1 }) {
        if(candidate_a < K + 1) continue; // Safety check.
        
        // Determine starting candidate for b based on parity:
        // If candidate_a is even, start with 1 (to maximize chance of gcd==1),
        // else start with 2.
        int start_b = (candidate_a % 2 == 0) ? 1 : 2;
        
        // b must satisfy: 1 <= b <= candidate_a - K (so that |a - b| = a - b >= K)
        for (int candidate_b = start_b; candidate_b <= candidate_a - K; candidate_b += 2) {
            // We already ensure candidate_a - candidate_b >= K by stopping at candidate_a - K.
            long long g = gcd_ll(candidate_a, candidate_b);
            // Compute lcm carefully to avoid overflow:
            long long l = (candidate_a / g) * candidate_b;
            if(l - g >= 2 * K) {
                cout << candidate_a << " " << candidate_b;
                return;
            }
        }
    }
    
    // If no valid pair is found, output -1 -1.
    cout << -1 << " " << -1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}
