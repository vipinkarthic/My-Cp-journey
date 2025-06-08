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
    ll n; cin >> n;
    vector<ll> entry(n);
    vector<ll> exit(n);
    FOR(i, n){
        cin >> entry[i] >> exit[i];
    }

    sort(entry.begin(), entry.end());
    sort(exit.begin(), exit.end());

    ll customers = 0, max_customer = 0;
    size_t i = 0, j = 0;

    while (i < n && j < n) {
        if (entry[i] < exit[j]) {
            customers++;
            i++;
        } else {
            customers--;
            j++;
        }
		max_customer = max(max_customer, customers);
    }

	cout << max_customer;
}

int main(){
	ios::sync_with_stdio(0); 
	cin.tie(0);

	int t = 1;
	while(t--){
		solve();
		cout << "\n";
	}

	return 0;
}