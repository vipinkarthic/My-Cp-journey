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

vi find_zero_segments(const std::vector<int>& data) {
    std::vector<int> segments;
    int n = data.size();
    int start = -1; 

    for (int i = 0; i < n; ++i) {
        if (data[i] == 0 && start == -1) {
            start = i;
        } else if (data[i] == 1 && start != -1) {
            segments.push_back(start);
            segments.push_back(i - 1);
            start = -1; 
        }
    }

    if (start != -1) {
        segments.push_back(start);
        segments.push_back(n - 1);
    }

    // FOR(i, segments.size()) segments[i]--;

    return segments;
}

void solve(){
	int n; cin >> n;
	vi values;
	int zero(0); int one(0);
	FOR(i, n){
		int temp; cin >> temp;
		values.PB(temp);
		if(temp) one++;
		else zero++;
	}

	vi vec = find_zero_segments(values);

	for( int x : vec){
		cout << x << " ";
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