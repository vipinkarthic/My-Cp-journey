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
	int x[n];
	int y[n];
	FOR(i,n){
		cin >> x[i] >> y[i];
	}
	int count(0);
	FOR(i,n){
		int ix = x[i];
		int iy = y[i];
		int upper(0),lower(0),right(0),left(0);
		FOR(j,n){
			if(i == j){
				continue;
			}
			int sx = x[j];
			int sy = y[j];
			if(ix > sx && iy == sy){
				left = 1;
			}

			if(ix < sx && iy == sy){
				right = 1;
			}

			if(ix == sx && iy > sy){
				lower = 1;
			}

			if(ix == sx && iy < sy){
				upper = 1;
			}


			if(upper == 1 && lower == 1 && right == 1 && left == 1){
				count++;
				break;
			}


		}
	}
	cout << count << endl;

	return 0; 
} 
