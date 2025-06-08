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
    string s, t; cin >> s >> t;
    map<char, int> last;
    FORR(i, t.length()-1, 1){
        last[t[i - 1]] = max(last[t[i - 1]], i - 1);
    }

    int min_length = INT_MAX;
    string result;

    FORL(i, 1, s.length()-1){
        if (last.find(s[i]) != last.end()) {
            int current_length = i + t.size() - last[s[i]];
            if (current_length < min_length) {
                min_length = current_length;
                result = s.substr(0, i) + t.substr(last[s[i]]);
            }
        }
    }

    if (min_length == INT_MAX) {
        cout << -1;
    } else {
        cout << result;
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