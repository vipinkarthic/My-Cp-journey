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

	int t; cin >>t;
	ll time(10000000001),tempi(0),count(1);
	int timing[t];
	FOR(i,t){
		ll get;
		cin >> get;
		timing[i] == get;
		if(get<time){
			time = get;
			tempi = i;
			count = 1;
		}else if(get == time){
			count++;
		}
	}
	if(count == 1){
		cout << tempi+1 << endl;
	}else{
		cout << "Still Rozdil";
	}

	return 0; 
} 
