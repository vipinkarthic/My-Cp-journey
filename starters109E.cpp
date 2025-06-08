#include "bits/stdc++.h" 
using namespace std; 
// #define max(a, b) (a < b ? b : a) 
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

	//10 = xi+x(i+3) then 8 = xi+x(i+3) i = 2
	//4 = xi-x(i+3)

	int t;cin >> t;
	while(t--){
		int n;cin >> n;
		vi numbers;
		FOR(i,n){
			int x;cin >> x;
			numbers.PB(x);
		}
		int checksum(0);
		bool checkkeep = true;
		for(int x : numbers){
			checksum += x;
		}

		if(checksum%2 != 0){
			cout << "-1" << endl;
			continue;
		}

		vi ansarr;
		for(int i = 0; i < n; i = i+2){
			int xi, xin;
			int sum = numbers[i]+numbers[i+1];
			// cout << "SUM : " << sum << endl;
			xi = sum/2;
			xin = max((xi - numbers[i+1]),(xi - numbers[i]));
			ansarr.PB(xi);
			ansarr.PB(xin);
		}

		// sort(ansarr.rbegin(),ansarr.rend());
		for(int x : ansarr){
			cout << x << " ";
		}
		cout << endl;

	} 

	return 0; 
} 
