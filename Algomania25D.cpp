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
	int n, a, b; cin >> n >> a >> b;
	vi points(n);
	FOR(i, n) cin >> points[i];
 
	vi mpfx(n+1, 0), cpfx(n+1, 0);
	FOR(i, n){
		int m(0), c(0);
 
		if(points[i] < a) m++;
		else if(points[i] > a) m--;
 
		if(points[i] < b) c++;
		else if(points[i] > b) c--;
 
		mpfx[i+1] = mpfx[i] + m;
		cpfx[i+1] = cpfx[i] + c;
	}

	vi temp_mpfx(mpfx.begin(), mpfx.end());
	sort(temp_mpfx.begin(), temp_mpfx.end());

	int btr = 0;
	if(a > b) btr = -1;
	else if(a < b) btr = 1;

	ll ans = 0;
	// FOR(i, n+1) {
	//     FOR(j, n+1) {
	//         if(mpfx[i] > cpfx[j] + btr) {
	//             if(i==j) ans += 2;
	//             else ans++;
	//         }
	//     }
	// }

	FOR(i, n+1){
		int v = cpfx[i] + btr;
		int l(0), r(n+1);
		while(l < r){
			int m = l + (r-l) /2;
			if(temp_mpfx[m] <= v) l = m+1;
			else r = m;
		}

		ans += (n+1 - l);

	    if(mpfx[i] > v) ans++;
	}
    
    cout << ans;
	
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