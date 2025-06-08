#include<bits/stdc++.h>
using namespace std; 
#define mod (1000000007)
#define INF INT_MAX
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++) 
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++) 
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--) 
typedef long long int ll; 
typedef vector<int> vi; 
typedef pair<int, int> pi; 
typedef vector<string> vs;
typedef vector<char> vc;
#define PB push_back 
#define POB pop_back 
#define MP make_pair 

void solve(){
	int n; cin >> n; //number of points
	int x_coords[n];
	int y_coords[n];
	FOR(i, n){
		cin >> x_coords[i] >> y_coords[i];
	}

	sort(x_coords, x_coords+n);
	sort(y_coords, y_coords+n);

	int a(0),b(0);
	FOR(i, n){
		a += x_coords[i] * i;
		a -= b;
		b += x_coords[i];
	}


	int c(0), d(0);
	FOR(i, n){
		c += y_coords[i] * i;
		c -= d;
		d += y_coords[i];
	}


	return a + c;


}

int main(){
	ios::sync_with_stdio(0); 
	cin.tie(0);

	int t = 1;
	while(t--){
		solve();
		cout << "\n";
	}

	return 0;
}