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

	int n; cin >> n;
	int hasharr[100000];
	FOR(i,n){
		int y;
		cin >> y;
		hasharr[y] = i+1;
	}
	int m; cin >> m;
	int petya(0),vasya(0);
	FOR(i,m){
		int q;
		cin >> q;
		vasya += hasharr[n];
		petya += n - hasharr[n]-1;
	}
	cout << vasya << " " << petya << endl;



	return 0; 
} 
