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
	int n, t; cin >> n >> t;
	int books[n];
	FOR(i, n) cin >> books[i];

	int size(0), sum(0), bookcount(0);

	FOR(i, n){
		if(books[i] > t){
			sum = 0;
			size = 0;
			continue;
		}

		if(books[i] + sum <= t){
			size++;
			sum+=books[i];
		}else{
			sum+=books[i];
			size++;
			while(sum > t){
				sum -= books[i-size+1];
				size--;
			}
		}

		bookcount = max(size, bookcount);
	}

	cout << bookcount;
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