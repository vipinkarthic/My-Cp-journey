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

int mex(vi &v) {
    vi ck(v.size() + 1, 0);    

    for(int x : v){
        if (x >= 0 && x <= v.size()) ck[x] = 1;
    }
    
    FOR(i, v.size() + 1) {
        if (!ck[i]) return i;
    }
    
    return v.size() + 1;
}

void solve(){
	int n; cin >> n;
	deque<int> nums(n);
	vi freq(n+1, 0);
	FOR(i, n){
		cin >> nums[i];
		freq[nums[i]]++;
	}

	vector<pi> ans;
	if(!freq[0]){
		cout << 1 << endl;
		cout << 1 << " " << n;
		return;
	}else if(freq[0] == n){
		cout << 2 << endl;
		cout << 1 << " " << n/2 << endl;
		cout << n/2 + 1 << " " << n << endl;
	}else{
		//reducing 0 blocks and replacing 0 blcosk with a single integer 1;

		while(nums.size() > 1){
			vector<pi> indices;
			FOR(i, n){

			}

			//lr
			FOR(i, nums.size()){

			}
			//rl
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