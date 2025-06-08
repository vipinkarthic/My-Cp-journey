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
    ll k; cin >> k;
    ll left = 1, right = 9e18;
    ll bulbs = 0;
    while(left <= right){
    	ll mid = (left+right)/2;
    	ll root = sqrtl((long double)mid);
    	while(root * root > mid) root--;
    	while((root + 1) * (root + 1) <= mid) root++;

    	ll non_perfects = mid - root;
    	if(non_perfects == k){
            bulbs = mid;
    		right = mid - 1;
        }else if (non_perfects < k) {
            left = mid + 1;
        }else {
            right = mid - 1;
        }
    }

    cout << bulbs;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }

    return 0;
}
