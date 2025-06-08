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
const int MAX = 1e6;

vector<vi> pfs(MAX);

void prime_factorize() {
    for (int i = 2; i < MAX; i++) {
        if (pfs[i].empty()) {
            for (int j = i; j < MAX; j += i) {
                pfs[j].push_back(i);
            }
        }
    }
}

void solve(){
	int n; cin >> n;
	map<int, int> primes;
	while(n--){
		string s; cin >> s;
		int k; cin >> k;
		// cout << k << " - " << endl;

		if(s != "QUERY"){
			if(s=="ADD"){
				for(int x: pfs[k]){
					primes[x]++;
				}
			}else{
				for(int x: pfs[k]){
					primes[x]--;
				}
			}
			// for(pi count: primes)
			// 	cout << count.first << " : " << count.second << " ";

			// cout << endl;
		}else{
			ll digit_sum = 0;
			for(pi count: primes){
				int temp = 0;
				if(count.second > 0){
					// cout << count.first << " : " << k << " - ";
					int b = count.first;
					while(b>0){
						temp = b%k;
						// cout << temp << " ";
						digit_sum+=temp;
						b/=k;
					}
				}
			}
			cout << digit_sum << endl;
		}
	}
}

int main(){
	ios::sync_with_stdio(0); 
	cin.tie(0);

	int t = 1;
	prime_factorize();
	// base_form_creation();
	while(t--){
		solve();
		cout << "\n";
	}

	return 0;
}