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
	int n,m; cin >> n >> m;
	vi nums;
	vi indices;
	FOR(i, n){
		int x; cin >> x;
		nums.PB(x);
	}

	FOR(i, m){
		int x; cin >> x;
		indices.PB(x);
	}

	int unique_count[n];
	int hash_arr[100001] = {0};
	int count = 0;
	FORR(i, n-1, 0){
		hash_arr[nums[i]]++;

		if(hash_arr[nums[i]] > 1){
			unique_count[i] = count;
			continue;
		}

		count++;
		unique_count[i] = count;
	}

	for(int x : indices){
		cout << unique_count[x-1] << endl;
	}
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