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
	int n; cin >> n;
	vector<pi> coords(n);
	vi xcoord(n), ycoord(n);
	FOR(i, n){
		cin >> xcoord[i] >> ycoord[i];	
		coords[i] = MP(xcoord[i], ycoord[i]);
	}

	if(n==1){
		cout << "1";
		return;
	}

	sort(xcoord.begin(), xcoord.end());
	sort(ycoord.begin(), ycoord.end());

	ll xl(xcoord[0]), xr(xcoord[n-1]), xltemp(xcoord[1]), xrtemp(xcoord[n-2]);
	ll yl(ycoord[0]), yr(ycoord[n-1]), yltemp(ycoord[1]), yrtemp(ycoord[n-2]);


	ll ans((xr-xl+1) * (yr-yl+1));

	FOR(i, n){
		int x(coords[i].first), y(coords[i].second);
		ll nxl, nxr, nyl, nyr;
			
		if(x == xl) nxl = xltemp;
		else nxl = xl;

		if(x == xr) nxr = xrtemp;
		else nxr = xr;

        if(y == yl) nyl = yltemp;
        else nyl = yl;

        if(y == yr) nyr = yrtemp;
        else nyr = yr;

        ll temp;

        ll box((ll)(nxr-nxl+1) * (ll)(nyr-nyl+1));
        if(box >= n){
        	temp = box;
        }else{
            ll w  = ((n + (nyr - nyl + 1) - 1) / (nyr - nyl + 1)) * (nyr - nyl + 1);
            ll h = ((n + (nxr - nxl + 1) - 1) / (nxr - nxl + 1)) * (nxr - nxl + 1);
            temp = min(w, h);
        }

        ans = min(ans, temp);
	}

	cout << ans;
}

int main(){
	ios::sync_with_stdio(0); 
	cin.tie(0);

	int t;
	cin >> t;
	while(t--){
		solve();
		cout << "\n";
	}

	return 0;
}