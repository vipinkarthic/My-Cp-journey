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

	int t;cin >> t;
	while(t--){
		int n; cin >> n;
		vi orgarr;
		int hasharr[n] = {0};
		bool tempcheck = true;
		FOR(i,n){
			int x; cin >> x;
			orgarr.PB(x);
			if(i>=1){
				if(orgarr[i] <= orgarr[i-1]){
					tempcheck = false;
					hasharr[i-1] = 1;
				}
			}
		}

		if(tempcheck){
			cout << "0" << endl;
			continue;
		}

		int count(0);
		for(int i = n-1; i >= 0; i--){
			if(orgarr[i] > orgarr[i+1]){
				int orgnumber = orgarr[i];
				int orgnumberf = orgarr[i+1];
				cout << "HERE" << orgnumber << endl;
				int x = orgnumber - orgnumberf;
				orgarr.insert(orgarr.begin()+i,x);
				orgarr.insert(orgarr.begin()+i+2,orgnumber-x);
				count++;
				n = orgarr.size(); 
			}
		}

		cout << count << endl;

	}

	return 0; 
} 
