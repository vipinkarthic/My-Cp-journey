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
int main() 
{ 
	ios::sync_with_stdio(0); 
	cin.tie(0); 

	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		string s; cin >> s;
		int cells[n],totalblocked(0);
		int emptycounter(0);
		int totalwatercounter(0);
		int totalcheck(0);
		vi empty;
		FOR(i,n){
			if(s[i] == '.'){
				cells[i] = 0;
				emptycounter++;
				totalcheck++;
				// cout << emptycounter << "ABS" << endl;
			}else if(s[i] == '#'){
				cells[i] = 1;
				totalblocked++;
				// totalcheck += emptycounter;
				empty.PB(emptycounter);
				emptycounter = 0;
				// cout << empty[0] << endl;
			}
		}

		int sum(0);
		for(int x: empty){
			sum += x;
		}

		if(sum != totalcheck){
			empty.PB(totalcheck - sum);
		}

		if(totalblocked == 0){
			if(emptycounter > 1){
				cout << "2" << endl;
				continue;
			}else{
				cout << "1" << endl;
				continue;
			}
		}
		if(totalblocked == n){
			cout << '0' << endl;
			continue;
		}

		// cout << endl;
		// cout << empty.size() << endl;
		for(int i: empty){
			if(i > 2){
				totalwatercounter = 2;
				break;
			}if(i <= 2){
				if(i == 1){
					totalwatercounter++;
				}else if(i == 2){
					totalwatercounter+=2;
				}
			}
		}

		cout << totalwatercounter << endl;

	}

	return 0; 
} 
