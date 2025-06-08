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
    int l1, r1; cin >> l1 >> r1;
    int l2, r2; cin >> l2 >> r2;

    vi doors;

    FOR(i, 102){
    	doors.PB(0);
    }

    int ints = min(r1, r2) - max(l1, l2);

    if (l1 < l2) doors[l2 - 1] = 1;
    if (l2 < l1) doors[l1 - 1] = 1;
    if (r1 > r2) doors[r2] = 1;
    if (r2 > r1) doors[r1] = 1;

    int locked = count(doors.begin(), doors.end(), 1);

    if (ints < 0) locked = 0;

    cout << max(1, locked + max(0, ints));
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
}