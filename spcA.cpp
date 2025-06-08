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

int divisorcount(int a, int b, int c) {
    int gcd_ab = c;
    int count = 0;

    for(int i = 1; i * i <= gcd_ab; i++) {
        if(gcd_ab % i == 0) {
            count += 2;
            if(i * i == gcd_ab) {
                count--;
            }
        }
    }

    return count;
}

void solve(){
    int n,k; cin >> n >> k;
    int nums[1000000] = { 0 }; 
    ll sum = 0;
    FOR(i, n){
        int x; cin >> x;
        int r = 0;
        int c = __gcd(x, k);
        if(nums[c]){
        	r = nums[c];
        }else{
			r = divisorcount(x, k, c);
			nums[c] = r;
        }
        sum+=r;
    }
    cout << sum;
}

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }

    return 0;
}