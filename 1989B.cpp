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
    string a, b; 
    cin >> a >> b;
    // int ha[26] = {0};  
    // int hb[26] = {0}; 
    int length = 0;  
    int a_pointer = 0;
    FOR(i, b.length()){
    	a_pointer = i;
    	FORL(j, i, a.length()-1){
    		int to_be_added = b.size() - j;
    		if(a[j] == b[j]){
    			break;
    		}
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