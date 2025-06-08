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
	int n,k; cin >> n >> k;
	string s; cin >> s;
	if(n==1){
		cout << "NO";
		return;
	}

    string r = s; 
    reverse(r.begin(), r.end());
    if(s < r){
        cout << "YES";
        return;  
    }

    int two(0);
    FORL(i, 1, s.size()-1){
        if(s[i] != s[0]){
            two = 1;
            break;
        }
    }

    if(two && k>=1) cout << "YES";
    else cout << "NO";

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