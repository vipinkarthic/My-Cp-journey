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

	float n,m,a,b; cin >> n >> m >> a >> b;
	float perspecial = b/m;
	if(perspecial >= a){
		// cout << "Hello" << endl;
		int sum = n*a;
		cout << sum << endl;
	}else{
		int temp = n/m;
		if(temp == 0){
			cout << min(b,a*n) << endl;
			return	0;
		} 
		//number of times m is used => m is used 2 times 
		// cout << "TEMP " << temp << endl;
		int sum = temp*b;
		int remainingrides = n-(m*temp); 
		int x = min(remainingrides*a,remainingrides*b);
		// cout << x << "CHECK " << endl;
		sum = sum+x;
		if((b*(temp+ 1)) < sum){
			cout << b*temp+1 << endl;
			return 0;
		}
		cout << fixed << sum << endl;
	}


	return 0; 
} 
