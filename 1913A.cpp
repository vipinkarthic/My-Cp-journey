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

	int t;
	cin >> t;

	while(t--){
		string s; cin >> s;
		int zcount(0),ocount(0),ans(0),count(0),temp(0),count1(0);
		FOR(i,s.length()){
			if(s[i] == '0'){
				zcount++;
			}else{
				ocount++;
			}
		}
		if(ocount == 0){
			cout << zcount << endl;
			continue;
		}else if (zcount == 0){
			cout << ocount << endl;
			continue;
		}
		if(ocount == zcount){
			cout << "0" << endl;
			continue;
		}
		// cout << s.length()-(abs(zcount - ocount)) << endl;
		FOR(i,s.length()){
			if(s[i] == '1'){
				zcount--;
			}else{
				ocount--;
			}

			if(zcount == 0 || ocount == 0){
				if(!zcount){
					cout << ocount << endl;
				}else{
					cout << zcount << endl;
				}
			}
		}

	}

	return 0; 
} 
