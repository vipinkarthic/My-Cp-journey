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
	int n; cin >> n;
	vi nums(n);
	FOR(i, n) cin >> nums[i];

	if(n >= 32){
		FOR(i, n) cout << "0";
		return;
	}

	FOR(i, n){
		int check(1);
		vi diff;
        FOR(j, n) if(j != i) diff.PB(nums[j]);

        while(diff.size() > 1 && check){
            FOR(j, diff.size()-1)
                if(diff[j] >= diff[j+1]){ 
                    check = 0; 
                    break; 
                }
                
            if(!check) break;
            
            FOR(j, diff.size()-1)
                diff[j] = diff[j+1] - diff[j];
            diff.resize(diff.size()-1);
        }

		cout << check;
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