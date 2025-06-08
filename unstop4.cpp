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

int give(int a,int b){
	int count(0);
	while(a%b!=0){
		a--;
		b++;
		count++;
	}
	return count;
}

int take(int a,int b){
	int count(0);
	while(a%b!=0){
		a++;
		b--;
		count++;
	}
	return count;
}

int main() 
{ 
	ios::sync_with_stdio(0); 
	cin.tie(0); 

	int t; cin >> t;
	while(t--){
		int a,b;
		cin >> a >> b;
		if(a == b){
			cout << "0" << endl;
		}else if(a>b){
			cout << min(give(a,b),take(a,b)) << endl;
		}else{
			cout << take(a,b) << endl;
		}		
	}

	return 0; 
} 
