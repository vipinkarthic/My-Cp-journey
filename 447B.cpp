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

	string s;int k;int arr[26];
	cin >> s; cin >> k; 
	FOR(i,26) cin >> arr[i];
	ll ans = 0;
	FORL(i,1,s.length()){
		ans += i*arr[s[i-1]-97];
		// cout << ans << " ";
	}
	int j = s.length()+1;
	int n = s.length()+k;
	sort(arr,arr+26);
	FORL(i,j,n){
		ans += i*arr[25];
	}
	cout << ans << endl;

	return 0; 
}
