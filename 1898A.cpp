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
		int n,k; cin >> n >> k;
		string org; cin >> org;
		int countA(0),countB(0); 
		FOR(i,n){
			if(org[i] == 'A'){
				countA++;
			}else{
				countB++;
			}
		}
		if(countB == k){
			cout << "0" << endl;
			continue;
		}else if(countB > k){
			char s = 'A';
			int no_to_be_replaced = countB - k;
			int count(0),tempi(0);
			FOR(i,n){
				if(org[i] == 'B'){
					count++;
				}
				if(count == no_to_be_replaced){
					tempi = i+1;
					break;
				}

			}
			cout << "1" << endl;
			cout << tempi << " " << s << endl;
		}else{
			char s = 'B';
			int no_to_be_replaced = k - countB;
			int count(0),tempi(0);
			FOR(i,n){
				if(org[i] == 'A'){
					count++;
				}
				if(count == no_to_be_replaced){
					tempi = i+1;
					break;
				}
			}
			cout << "1" << endl;
			cout << tempi << " " << s << endl;
		}
	}

	return 0; 
} 
