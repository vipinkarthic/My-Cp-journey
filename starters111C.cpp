#include "bits/stdc++.h" 
using namespace std; 
#define max(a, b) (a < b ? b : a) 
#define min(a, b) ((a > b) ? b : a) 
#define mod 1e9 + 7 
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++) 
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++) 
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--) 
#define INF 1000000000000000003 
typedef long long int ll; 
typedef vector<int> vi; 
typedef pair<int, int> pi; 
#define F first 
#define S second 
#define PB push_back 
#define POB pop_back 
#define MP make_pair 

bool vowelcheck(char c) {
    return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

bool solve(const string& s, const string& codetown) {
    if (s.length() != codetown.length()) {
        return false; 
    }

    int n = s.length();

    for (int i = 0; i < n; ++i) {
        char current = s[i];
        char currentcode = codetown[i];

        if ((vowelcheck(current) && vowelcheck(currentcode)) || (!vowelcheck(current) && !vowelcheck(currentcode))) {
            continue; 
        } else {
            return false; 
        }
    }

    return true; 
}


int main() 
{ 
	ios::sync_with_stdio(0); 
	cin.tie(0); 
// c - c , o - v , d - c , e - v, t - c, o - v, w - c , n - c
	int t; cin >> t;
	bool checkc = true;
	while(t--){
		string s; cin >> s;
		string d = "CODETOWN";
		if(solve(s,d)){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}

	return 0; 
} 
