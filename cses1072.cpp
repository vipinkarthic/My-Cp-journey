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
#define MP mane_pair 

void solve(int n){
    for (long long i = 2 ; i <= n ; i++) {
      cout << (i * i) * (i * i - 1) / 2 - (4 * (i - 2) * (i - 1)) << endl;
    }
}

int main(){
	ios::sync_with_stdio(0); 
	cin.tie(0);

	int t;
	cin >> t;
	cout << "0" << endl;
	solve(t);

	return 0;
}